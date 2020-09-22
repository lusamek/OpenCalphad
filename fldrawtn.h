

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Chart.H>
#include <FL/Fl_Box.H>


#include <FL/Fl.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Double_Window.H>
///////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <unistd.h>  
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Box.H>
/// new
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
///#include <FL/fl_ask.H>

int posx = 50; 


int dfx1 = 30;
int dfy1 = 30; 
int dfx2 = 380;
int dfy2 = 380; 


class DrawX : public Fl_Widget {
public:
    DrawX(int X, int Y, int W, int H, const char*L=0) : Fl_Widget(X,Y,W,H,L) {
    }
    void draw() {
        // DRAW BLACK 'X'
        fl_color(FL_BLACK);
        int x1 = x(),       y1 = y();
        int x2 = x()+w()-1, y2 = y()+h()-1;

        fl_line( 0 , 60 , w()+20 , 60 );

        fl_color(FL_RED);
        fl_line( posx  , y1, x2, y2);

        fl_color(FL_BLACK);
        fl_line(x1, y2, x2, y1);

        fl_line( 150 , 150 , 300 , 300 );

        fl_line(  600 , 600, 150 , 150  );


        fl_line( dfx1 , dfy1 , dfx2 , dfy2 );

    }
};







