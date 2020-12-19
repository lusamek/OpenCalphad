
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <dirent.h>
#include <sys/stat.h>

#include "tinyexpr.h"

#include <string>




int fexist(const char *a_option)
{
  char dir1[PATH_MAX]; 
  char *dir2;
  DIR *dip;
  strncpy( dir1 , "",  PATH_MAX  );
  strncpy( dir1 , a_option,  PATH_MAX  );

  struct stat st_buf; 
  int status; 
  int fileordir = 0 ; 

  status = stat ( dir1 , &st_buf);
  if (status != 0) {
    fileordir = 0;
  }
  FILE *fp2check = fopen( dir1  ,"r");
  if( fp2check ) {
  fileordir = 1; 
  fclose(fp2check);
  } 

  if (S_ISDIR (st_buf.st_mode)) {
    fileordir = 2; 
  }
  return fileordir;
}






const char *strsplit( const char *str , int mychar , int myitemfoo ) 
{  
	char ptr[strlen(str)+1]; int i,j=0;
	int myitem = myitemfoo +1;
	int fooitem = 0;
	for(i=0; str[i]!='\0'; i++)
	{
		if ( str[i] == mychar ) 
			fooitem++;
		else if ( str[i] != mychar &&  fooitem == myitem-2  ) 
			ptr[j++]=str[i];
	} 
	ptr[j]='\0';
	char ret[strlen(str)+1]; 
	strncpy( ret, ptr, strlen(str)+1 ); 
	const char *ret2 = ret; // method in pseudo, C, for C++
	return ret2;
}



