

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
#include <time.h>
#include <dirent.h>
#include <sys/stat.h>



const char *fltkawktail(const char *name )
{
	const char *base = name;
	while (*name)
	{
		if (*name++ == ' ')
		{
			base = name;
		}
	}
	return (base);
}





const char *fltkbasename(const char *name )
{
	const char *base = name;
	while (*name)
	{
		if (*name++ == '/')
		{
			base = name;
		}
	}
	return (base);

}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
//////////
 const char* fltkdirnameunix( const char* fullpath ) 
 {
     char *e = (char*) strrchr( fullpath, '/');
     if(!e){
         char* buf = strdup(fullpath);
         return buf;
     }
     int index = (int)(e - fullpath);
     char* s = (char*) malloc( sizeof(char)*(index+1));
     strncpy(s, fullpath, index);
     s[index] = '\0';
     return s;
 }





/// fltkbasenoext  
const char *fltkbasenoext(const char* mystr)
{
    char *retstr;
    char *lastdot;
    if (mystr == NULL)
         return NULL;
    if ((retstr = (char*) malloc (strlen (mystr) + 1)) == NULL)
        return NULL;
    strcpy (retstr, mystr);
    lastdot = (char*) strrchr( retstr, '.' );
    if (lastdot != NULL)
        *lastdot = '\0';
    return retstr;
}




