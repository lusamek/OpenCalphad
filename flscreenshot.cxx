
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
/////////////////////////
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>


Fl_Input *input1;
void btn_callback(Fl_Widget*, void* userdata);
int scrotsel = 0;	


void but2_press3( Fl_Widget* obj, void*)
{
   char str[ 2500 ];
   char charo[ 2500 ];
   if ( scrotsel == 1 ) 
       snprintf( charo , sizeof( charo ), " scrot -s %d-screenshot.png", (int)time(NULL) );
     else 
      snprintf( charo ,  sizeof( charo ), "  scrot %d-screenshot.png", (int)time(NULL) );
   printf("Execute: %s\n", charo );
   system( charo );
   exit( 0 );
}



////////////////////////////////////////
int main( int argc, char *argv[])
{
	////////////////////////////////////////////////////////
	if ( argc == 2)
	if ( strcmp( argv[1] , "" ) !=  0 )
	{
			chdir( argv[ 1 ] );
	}

	////////////////////////////////////////////////////////
	if ( argc == 2)
	if ( strcmp( argv[1] , "-sel" ) ==  0 )
	{
		 scrotsel = 1;	
	}


    Fl_Window *win = new Fl_Window( 230, 100,"FLTK");
    Fl_Box *box1 = new Fl_Box(15, 25, 200, 0, "Application Launcher");
    box1->align(FL_ALIGN_TOP);
    Fl_Button *button3 = new Fl_Button( 15, 40 , 200 , 30 ,"Screenshot!");
    button3->callback( (Fl_Callback*) but2_press3 );

    win->end();
    win->resizable(win);
    // Display the window
    win->show();
    // Run and return
    return Fl::run();
}


