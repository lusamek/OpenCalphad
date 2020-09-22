/*-
 * Copyright (c) 2008 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by 
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */





#include <stdio.h>   
#include <time.h>
#include <math.h>
#include <unistd.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Box.H>

#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>


char var_system[PATH_MAX];
char var_calc_x[PATH_MAX];
char var_calc_y[PATH_MAX];
char var_plot_x[PATH_MAX];
char var_plot_y[PATH_MAX];
char var_tdb_database[PATH_MAX];
int  var_calc_number_element = 2 ; 



char inipath[2500];
char userpath[2500];




   

#include <fcntl.h>
#include <unistd.h>
static int cat_fd(int fd) 
{
  char buf[4096];
  ssize_t nread;

  while ((nread = read(fd, buf, sizeof buf)) > 0) 
  {
    ssize_t ntotalwritten = 0;
    while (ntotalwritten < nread) {
      ssize_t nwritten = write(STDOUT_FILENO, buf + ntotalwritten, nread - ntotalwritten);
      if (nwritten < 1)
        return -1;
      ntotalwritten += nwritten;
    }
  }
  return nread == 0 ? 0 : -1;
}
/////////////////
static int ncat_static(const char *fname) 
{
  int fd, success;
  if ((fd = open(fname, O_RDONLY)) == -1)
    return -1;

  success = cat_fd(fd);

  if (close(fd) != 0)
    return -1;

  return success;
}







void ncat( const char* pattern )
{
      printf( "File exist (%s) (%d)\n", pattern , fexist( pattern ) );
      if ( fexist( pattern )  == 1 )
      {
              ncat_static( pattern );
      }
}





void nls()
{ 
	DIR *dirp;
	struct dirent *dp;
	dirp = opendir( "." );
	while  ((dp = readdir( dirp )) != NULL ) 
	{
		if (  strcmp( dp->d_name, "." ) != 0 )
			if (  strcmp( dp->d_name, ".." ) != 0 )
				printf( "%s\n", dp->d_name );
	}
	closedir( dirp );
}






void nlsgrep( const char *pattern )
{ 
	DIR *dirp;
	struct dirent *dp;
	dirp = opendir( "." );
	while  ((dp = readdir( dirp )) != NULL ) 
	{
		if (  strcmp( dp->d_name, "." ) != 0 )
		if (  strcmp( dp->d_name, ".." ) != 0 )
                {
                    if ( strstr( dp->d_name, pattern ) != 0 ) 
			printf( "%s\n", dp->d_name );
                }
	}
	closedir( dirp );
}








void filegrep(  const char *filein , const char *pattern )
{
  int i;
  FILE *fp;
  char strline[PATH_MAX];
  char strlinein[PATH_MAX];

  printf( "File exist (%s) (%d)\n", filein , fexist( filein ) );
  if ( fexist( filein ) == 1 )
  {
    fp = fopen( filein , "rb");
    while( !feof(fp) )
    {
	    fgets( strlinein , PATH_MAX, fp);
	    strncpy( strline , "" , PATH_MAX );
	    for( i = 0 ; ( i <= strlen( strlinein ) ); i++ )
	    {
		    if ( strlinein[ i ] != '\n' )
			    strline[i]=strlinein[i];

		    if ( !feof(fp) )
		    {
		            if ( strlinein[ i ] == '\n' )
			    if ( strstr( strline, pattern ) != 0 ) 
			    {
				    printf( "%s\n" , strline );
			    }
		    }
	    }
     }
     fclose( fp );
   }
}








void nsystem( const char *mycmd )
{
	printf( "1.System Command %s>\n", mycmd );
	system( mycmd );
	printf( "2.System Command %s>\n", mycmd );
}



void nrun( const char *mycmd, const char *myfile )
{
	printf( "============================\n" );
	printf( "   VIM                      \n" );
	printf( "============================\n" );
	char cmdi[PATH_MAX];
	strncpy( cmdi , mycmd , PATH_MAX );
	strncat( cmdi , " " , PATH_MAX - strlen( cmdi ) -1 );
	strncat( cmdi , " \""  , PATH_MAX - strlen( cmdi ) -1 );
	strncat( cmdi , myfile , PATH_MAX - strlen( cmdi ) -1 );
	strncat( cmdi , "\" "  , PATH_MAX - strlen( cmdi ) -1 );
	strncat( cmdi , " " , PATH_MAX - strlen( cmdi ) -1 );
	nsystem( cmdi ); 
	printf( "============================\n" );
	printf( "   VIM (Completed)          \n" );
	printf( "============================\n" );
}






void clear_plot(  )
{
	printf( "1.Clr Plot\n" );
        FILE *fp;
        fp = fopen( "ocgnu.plt" , "wb+");
        fclose( fp );
}






void add_new_element( const char *pattern)
{
 printf(">Add new element!\n");
 
 char charo[PATH_MAX];
 char curcontent[PATH_MAX];

 if( var_calc_number_element >= 2 )
 {  
    
    strncpy( curcontent, input_var_set_condition->value( ), PATH_MAX );
    snprintf( charo , sizeof( charo ), "x(%s)=0.01 ", pattern  );
    strncat( curcontent , charo , PATH_MAX - strlen( curcontent ) -1 );
    input_var_set_condition->value( curcontent );
 }
}  






void create_macro(  )
{

        // classic macro, to be edited and updated.
        char charo[PATH_MAX];

	printf( "1.Create Macro\n" );
        FILE *fp;
        fp = fopen( "macro.ocm" , "wb+");

        fputs( "\n", fp );
        fputs( "\n", fp );
        fputs( "new Y\n", fp );
        fputs( "\n", fp );
        fputs( "\n", fp );
        fputs( "set echo\n", fp );
        fputs( "\n", fp );

        fputs( "\n", fp );
        fputs( "r t ", fp );
        fputs( var_tdb_database , fp );
        fputs( "\n", fp );
        fputs( var_system , fp );
        fputs( "\n", fp );
        fputs( "\n", fp );
        fputs( "\n", fp );

   //  input_var_set_condition->value( "t=1000 p=1e5 n=1 x(c)=0.2 " );   
   //  The default one for fe-c:
   //  snprintf( charo , sizeof(charo ), "set cond t=1000 p=1e5 n=1 x(%s)=0.2",  var_calc_x  );
   //  fputs( charo , fp );
   //  fputs( "\n", fp );

        strncpy( charo, "", PATH_MAX );     
        snprintf( charo , sizeof( charo ), " set cond %s ",  input_var_set_condition->value()    );
        fputs( charo , fp );
        fputs( "\n", fp );

        fputs( "c e\n", fp ); fputs( "\n", fp );
        fputs( "l r 1\n", fp ); fputs( "\n", fp );


        // input_var_calc_x and input_var_calc_y  
        strncpy( charo, "", PATH_MAX );
        //snprintf( charo , sizeof( charo ), "set ax 1 x(%s) 0 0.25 ,,,",   input_var_calc_x->value()   );
        snprintf( charo , sizeof( charo ), "set ax 1 x(%s) %s %s ,,,",   input_var_calc_x->value() ,
        input_var_calc_xmin->value(),   input_var_calc_xmax->value() );
        fputs( charo , fp );
        fputs( "\n", fp );
        fputs( "\n", fp );

        //snprintf( charo , sizeof( charo ), "set ax 2 t 500 2000 10" );
        strncpy(  charo, "", PATH_MAX );
        snprintf( charo , sizeof( charo ), "set ax 2 %s %s %s %s",   input_var_calc_y->value() , 
        input_var_calc_ymin->value(),   input_var_calc_ymax->value(),  input_var_calc_ystep->value()      );
        fputs( charo , fp );
        fputs( "\n", fp );
        fputs( "\n", fp );

        fputs( "l ax\n", fp ); 
        fputs( "\n", fp );
        fputs( "l sh\n", fp ); 
        fputs( "\n", fp );

        fputs( "\n", fp );
        fputs( "map\n", fp );
        fputs( "\n", fp );

        fputs( "\n", fp );
        fputs( "plot\n", fp );
        snprintf( charo , sizeof( charo ), "w\%(*,%s)\n", var_calc_x ); 
        fputs( charo , fp );
        fputs( "T_C\n", fp );
        fputs( "title map 1 fig 1\n", fp );
        fputs( "render\n", fp );
        fputs( "\n", fp );
        fputs( "\n", fp );

        fclose( fp );
	printf( "2.Create Macro\n" );
}






void ncpskip( const char *filetarget,  const char *  filesource , const char *pattern)
{
  int fetchi;
  FILE *fp5;
  FILE *fp6;
  char fetchline[PATH_MAX];
  char fetchlinetmp[PATH_MAX];
  char filein[PATH_MAX];
    
  if ( fexist( filesource ) == 1 )
  {
    fp6 = fopen( filesource , "rb");
    fp5 = fopen( filetarget , "wb");
    while( !feof(fp6) ) 
    {
          fgets(fetchlinetmp, PATH_MAX, fp6); 
          strncpy( fetchline, "" , PATH_MAX );
          for( fetchi = 0 ; ( fetchi <= strlen( fetchlinetmp ) ); fetchi++ )
            if ( fetchlinetmp[ fetchi ] != '\n' )
                 fetchline[fetchi]=fetchlinetmp[fetchi];
                 
                if ( !feof( fp6 ) ) 
                {
		   if ( strstr( fetchline, pattern ) == 0 ) 
		   {
                    fputs( fetchline, fp5 );
                    fputs( "\n", fp5 );
		   }
		   else
		   {
		    printf( "Skip line : %s\n" , fetchline );
		   }
                }
     }
     fclose( fp6 );
     fclose( fp5 );
   }
}






void ncp( const char *filetarget,  const char *  filesource )
{
  char            buffer[1];
  size_t          n;
  size_t          m;
  FILE *fp;
  FILE *fp1; 
  FILE *fp2;
  int counter = 0 ; 
  int freader = 1 ; 
  int i , j ,posy, posx ; 
  if ( fexist( filesource ) == 1 )
  {
        fp = fopen( filesource, "rb");
        fp2 = fopen( filetarget, "wb");
        counter = 0; 
        while(  !feof(fp) && ( freader == 1)   ) {
           if (  feof(fp)   ) {
                freader = 0 ; 
            }
            n = fread(  buffer, sizeof(char), 1 , fp);
            m = fwrite( buffer, sizeof(char), 1,  fp2);
        }
        fclose(fp2);
        fclose(fp);
      }
}












