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
/////////////////////////////////////////////////////// 
/////////////////////////////////////////////////////// 



#include <unistd.h>
#include <time.h>
#include <math.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <stdio.h>   
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


///////////////////////////////////////////
///////////////////////////////////////////
///////////////////////////////////////////
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






void clear_plot(  )
{
	printf( "1.Clr Plot\n" );
        FILE *fp;
        fp = fopen( "ocgnu.plt" , "wb+");
        fclose( fp );
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


        snprintf( charo , sizeof(charo ), "set cond t=1000 p=1e5 n=1 x(%s)=0.2",  var_calc_x  );
        fputs( charo , fp );
        fputs( "\n", fp );

        fputs( "c e\n", fp ); fputs( "\n", fp );
        fputs( "l r 1\n", fp ); fputs( "\n", fp );

        snprintf( charo , sizeof(charo ), "set ax 1 x(%s) 0 0.25 ,,,",  var_calc_x  );
        fputs( charo , fp );
        fputs( "\n", fp );
        fputs( "\n", fp );

        snprintf( charo , sizeof(charo ), "set ax 2 t 500 2000 10" );
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



