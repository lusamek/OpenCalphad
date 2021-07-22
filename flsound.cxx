// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "flsound.h"
#include <stdio.h>
#include <stdlib.h>
#include "headerf.h"

Fl_Double_Window *win1=(Fl_Double_Window *)0;

static void cb_Sound(Fl_Button*, void*) {
  printf( "=>amixer \n" );
   printf( "=>mixerctl Up \n" );
   
   system( "  amixer -c 0 sset PCM 2+ " );  // for tv pi 
   system( "  mixerctl -w outputs.master=+10 ");

   printf( " New amixer headphone for rpi \n" );   
   system( "  amixer  -c 1 sset Headphone  150+  " );
   
   
   
   
      system( "  amixer -c 0 sset PCM 100+ " );  // for tv pi;
}

#include <FL/Fl_Image.H>
static const unsigned char idata_2uparrow[] =
{255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,54,161,0,0,46,156,0,0,49,156,0,0,51,157,0,0,52,157,0,
0,52,156,0,0,53,157,0,0,48,154,60,4,48,151,227,9,52,152,234,0,50,155,77,0,56,
162,0,0,58,165,0,0,59,170,0,0,61,174,0,0,65,179,0,0,69,186,0,0,72,189,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,54,161,0,0,46,156,0,0,49,156,
0,0,51,157,0,0,52,157,0,0,53,156,0,0,45,152,75,8,44,151,244,116,160,209,255,
103,160,218,255,0,50,158,248,0,51,157,95,0,59,166,0,0,59,170,0,0,61,174,0,0,65,
179,0,0,69,186,0,0,72,189,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,0,54,161,0,0,46,156,0,0,49,156,0,0,50,157,0,0,53,158,0,0,40,150,107,13,52,
153,248,134,175,214,255,148,214,255,255,50,148,255,255,26,110,222,255,5,59,166,
251,0,53,160,128,0,60,170,0,0,61,174,0,0,65,179,0,0,69,186,0,0,72,189,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,54,161,0,0,46,156,0,0,49,156,
0,0,51,158,0,0,41,152,135,29,64,160,253,153,193,223,255,150,215,255,255,24,
129,255,255,0,109,255,255,25,132,255,255,35,122,231,255,10,68,176,254,0,54,165,
156,0,62,174,0,0,65,179,0,0,69,186,0,0,72,189,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,54,161,0,0,47,156,0,0,48,156,0,0,37,150,160,38,78,166,
254,170,209,231,255,155,218,255,255,52,146,255,255,17,105,228,255,11,100,226,
255,10,117,255,255,23,131,255,255,40,129,238,255,11,76,185,255,0,56,169,176,0,
64,178,0,0,69,186,0,0,72,189,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,0,54,161,0,0,46,156,6,0,37,150,186,52,91,173,255,182,221,238,255,159,
221,255,255,81,167,255,255,36,112,217,255,0,54,161,248,6,55,161,246,61,122,216,
255,34,131,255,255,19,129,255,255,43,137,243,255,16,84,193,255,0,59,174,200,0,
68,185,14,0,72,190,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
53,160,12,0,37,151,200,72,111,183,255,196,233,244,255,169,226,255,255,114,188,
255,255,53,117,210,255,2,53,159,246,0,54,160,67,0,55,165,49,15,64,167,239,61,
121,213,255,32,131,255,255,22,130,255,255,48,143,248,255,22,95,204,255,0,62,180,
214,0,71,189,22,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,49,
157,211,101,138,197,255,218,250,252,255,195,245,255,255,143,205,251,255,58,114,
200,255,0,48,157,237,0,52,160,60,0,58,165,0,0,59,168,0,0,56,169,46,9,61,170,227,
39,105,206,255,19,121,250,255,24,132,255,255,51,149,253,255,30,109,218,255,1,
71,189,223,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,10,57,157,
241,91,135,195,255,97,145,205,255,80,134,204,255,48,100,186,255,1,48,158,221,0,
54,161,40,0,57,165,0,0,63,175,0,0,64,177,0,0,61,174,0,0,61,175,20,2,62,175,208,
5,80,200,255,3,90,218,255,17,102,221,255,25,107,219,255,4,77,195,247,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,51,153,80,0,41,149,174,0,40,
150,175,0,43,153,179,0,48,157,150,0,57,162,23,0,58,166,0,0,62,174,0,0,64,176,0,
0,65,179,0,0,66,181,0,0,65,178,0,0,66,180,18,0,66,181,140,0,68,183,179,0,68,
185,175,0,69,188,176,0,74,194,93,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,0,51,153,0,0,51,154,0,0,52,157,0,0,53,159,0,0,56,161,0,0,58,165,0,0,
62,174,0,0,63,175,0,0,58,173,98,0,58,175,106,0,66,183,6,0,68,186,0,0,67,182,0,
0,69,184,0,0,71,187,0,0,72,189,0,0,73,192,0,0,74,194,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,51,153,0,0,51,153,0,0,52,156,0,0,53,159,0,0,
57,164,0,0,60,174,0,0,62,174,0,0,53,170,160,35,86,187,254,40,95,192,255,0,61,
179,180,0,69,186,4,0,70,190,0,0,73,192,0,0,72,189,0,0,72,189,0,0,73,191,0,0,74,
194,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,51,152,0,0,53,
157,0,0,59,168,0,0,58,171,0,0,59,172,0,0,59,174,0,0,50,169,182,49,96,190,255,
156,201,244,255,92,168,248,255,8,83,200,255,0,64,181,198,0,70,190,8,0,76,197,0,
0,79,201,0,0,78,200,0,0,75,195,0,0,74,193,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,59,165,0,0,64,176,0,0,63,175,0,0,58,172,0,0,57,172,23,
0,49,169,206,66,110,195,255,168,208,245,255,79,163,255,255,7,118,255,255,33,
133,248,255,18,95,209,255,0,67,187,217,0,74,195,33,0,79,201,0,0,81,206,0,0,84,
212,0,0,81,206,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,65,
176,0,0,64,174,0,0,64,174,0,0,55,171,23,0,50,169,220,87,128,202,255,177,217,249,
255,91,171,255,255,13,119,255,255,3,112,254,255,9,119,255,255,36,136,252,255,24,
105,218,255,1,72,193,230,0,76,200,40,0,82,206,0,0,84,210,0,0,87,217,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,64,174,0,0,64,174,0,0,58,171,
55,2,54,170,233,107,143,210,255,188,224,253,255,108,184,255,255,43,137,249,255,
14,92,211,255,9,88,209,255,29,124,248,255,17,124,255,255,37,138,254,255,28,113,
225,255,1,76,199,240,0,78,204,74,0,84,210,0,0,87,215,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,65,174,0,0,55,170,72,4,56,172,242,127,159,
216,255,195,229,254,255,124,194,255,255,76,157,248,255,22,92,205,255,0,64,183,
199,0,68,186,188,53,111,208,255,58,140,249,255,13,121,255,255,40,141,255,255,34,
121,231,255,3,80,205,247,0,80,208,87,0,87,215,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,0,58,172,98,27,74,179,248,163,187,226,255,213,243,255,
255,153,214,255,255,99,169,242,255,23,90,199,255,0,64,184,189,0,72,190,2,0,74,
193,0,1,69,193,171,37,103,208,255,47,134,244,255,17,125,255,255,43,144,255,255,
42,132,240,255,9,90,214,251,0,85,214,119,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,9,64,175,242,145,174,223,255,203,234,252,255,159,213,249,
255,113,174,235,255,21,84,194,254,0,62,183,164,0,72,190,0,0,72,190,0,0,74,193,0,
0,75,198,0,0,73,198,143,20,93,209,253,15,112,240,255,11,116,251,255,42,140,
253,255,38,129,240,255,3,89,217,247,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,6,67,178,201,34,87,188,251,27,85,191,250,25,87,192,250,11,74,188,
245,0,66,186,136,0,73,189,0,0,72,190,0,0,72,190,0,0,74,193,0,0,75,198,0,0,79,
202,0,0,78,205,116,1,82,210,243,0,87,217,250,3,89,219,249,9,95,222,251,2,90,220,
212,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0};
static Fl_Image *image_2uparrow() {
  static Fl_Image *image = new Fl_RGB_Image(idata_2uparrow, 22, 22, 4, 0);
  return image;
}

static void cb_Sound1(Fl_Button*, void*) {
  printf( "=>amixer \n" );
   system( "  amixer -c 0 sset PCM 2- " );  // for tv pi 
   printf( "=>mixerctl Down \n" );
   system( "  mixerctl -w outputs.master=-10 ");
   
   printf( " New amixer headphone for rpi \n" );   
   system( "  amixer  -c 1 sset Headphone  150-  " );
   
   
   
      system( "  amixer -c 0 sset PCM 100- " );  // for tv pi;
}

static const unsigned char idata_2downarrow[] =
{255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,6,75,192,187,26,88,200,248,19,87,204,247,19,90,207,249,
8,83,209,240,0,83,214,116,0,91,223,0,0,96,232,0,0,101,240,0,0,103,245,0,0,104,
246,0,0,104,246,0,0,101,247,97,0,105,250,237,0,108,254,251,2,109,255,250,6,112,
255,249,2,110,255,199,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
11,76,196,245,146,180,232,255,188,224,250,255,148,206,248,255,106,172,241,255,
15,95,220,253,0,84,220,146,0,96,232,0,0,101,240,0,0,104,245,0,0,104,246,0,0,
100,246,125,16,114,249,251,15,118,254,255,8,115,255,255,37,137,255,255,38,137,
255,255,4,111,255,249,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
74,198,118,38,97,210,251,174,202,242,255,212,243,255,255,152,211,255,255,96,
168,247,255,19,104,230,255,0,91,230,174,0,101,240,0,0,103,245,0,0,99,246,152,34,
123,249,254,47,138,254,255,16,121,255,255,40,138,255,255,43,141,255,255,11,115,
255,253,0,108,255,136,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
80,200,0,0,73,204,87,14,85,213,247,139,179,239,255,190,226,255,255,122,191,255,
255,74,157,252,255,18,109,239,255,0,97,239,186,0,101,245,173,49,132,250,254,59,
143,255,255,14,119,255,255,37,136,255,255,36,135,255,255,6,110,255,250,0,107,
255,110,0,109,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
79,200,0,0,83,207,0,0,81,214,75,6,85,221,240,119,169,241,255,183,221,255,255,
102,177,255,255,43,138,253,255,11,111,247,255,10,111,250,255,36,130,255,255,16,
120,255,255,34,135,255,255,31,131,255,255,2,109,255,245,0,107,255,92,0,109,255,
0,0,109,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,81,
202,0,0,83,208,0,0,88,216,0,0,88,224,38,0,86,230,230,101,159,244,255,176,218,
254,255,82,163,255,255,15,120,255,255,5,112,255,255,7,114,255,255,34,134,255,
255,26,128,255,255,1,107,255,238,0,107,255,58,0,109,255,0,0,110,255,0,0,110,255,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,68,183,0,0,76,197,
0,0,89,219,0,0,94,226,0,0,95,234,31,0,90,239,217,74,146,248,255,170,213,254,
255,68,153,255,255,2,111,255,255,34,134,255,255,20,123,255,255,0,107,255,228,0,
109,255,44,0,110,255,0,0,111,255,0,0,103,244,0,0,96,234,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,0,61,172,0,0,54,162,0,0,57,165,0,0,85,211,0,0,
89,222,0,0,96,241,10,0,95,249,197,58,139,254,255,157,206,255,255,88,168,255,
255,10,116,255,255,0,106,255,209,0,109,255,18,0,109,252,0,0,103,245,0,0,89,219,
0,0,87,215,0,0,88,216,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,
0,0,63,176,0,0,53,160,0,0,48,149,0,0,50,154,0,0,52,156,0,0,77,201,0,0,105,254,
4,0,101,255,178,44,132,255,255,49,138,255,255,0,105,255,192,0,108,253,10,0,98,
235,0,0,87,216,0,0,78,202,0,0,82,208,0,0,85,214,0,0,89,220,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,0,63,175,0,0,54,161,0,0,49,151,0,0,51,156,
0,0,55,161,0,0,57,164,0,0,80,207,0,0,110,255,2,0,105,255,124,0,105,255,134,0,
110,255,8,0,90,223,0,0,75,195,0,0,77,199,0,0,81,206,0,0,83,210,0,0,86,214,0,0,
89,220,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,63,175,62,0,
43,155,143,0,37,145,144,0,41,151,147,0,48,158,119,0,60,168,18,0,62,172,0,0,83,
211,0,0,111,255,0,0,111,255,0,0,88,220,0,0,75,195,0,0,77,199,12,0,77,200,110,0,
79,203,147,0,80,208,144,0,83,213,144,0,89,220,70,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,10,63,168,239,79,123,190,255,82,128,196,255,70,120,
197,255,38,91,183,255,0,52,165,208,0,62,175,20,0,67,182,0,0,85,214,0,0,88,218,0,
0,75,195,0,0,76,199,2,1,75,198,193,2,87,213,255,1,94,227,255,13,104,230,255,
22,111,231,255,4,93,223,244,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,2,47,151,220,110,146,201,255,219,253,254,255,191,241,255,255,140,200,249,
255,51,110,203,255,0,55,172,228,0,66,184,48,0,73,192,0,0,76,196,0,0,73,198,33,6,
75,197,217,36,111,220,255,17,120,251,255,21,128,255,255,50,148,255,255,32,123,
239,255,1,93,227,230,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
47,151,22,0,38,151,213,85,128,196,255,199,240,249,255,166,223,255,255,113,185,
255,255,48,118,216,255,1,66,183,240,0,73,193,49,0,75,198,29,12,80,198,231,57,
125,225,255,35,131,254,255,20,127,255,255,47,143,253,255,26,116,235,255,0,89,
224,225,0,93,228,33,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,
52,155,0,0,54,162,14,0,43,161,199,64,111,193,255,186,228,245,255,153,214,255,
255,81,165,254,255,34,114,224,255,0,72,194,243,3,75,197,240,60,128,229,255,39,
133,255,255,16,124,255,255,43,139,251,255,19,109,232,255,0,88,223,212,0,93,227,
27,0,94,229,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,54,156,
0,0,61,166,0,0,54,166,0,0,46,170,176,47,102,194,255,176,220,242,255,145,210,
255,255,51,145,255,255,18,111,236,255,11,105,235,255,12,117,255,255,20,127,255,
255,40,136,249,255,15,104,229,255,0,87,224,191,0,91,226,0,0,94,228,0,0,94,229,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,54,156,0,0,60,165,0,0,
55,166,0,0,60,175,0,0,57,181,155,36,92,197,254,161,209,240,255,142,207,255,255,
19,124,255,255,0,108,255,255,22,127,255,255,35,132,247,255,11,99,227,255,0,89,
223,174,0,93,227,0,0,93,227,0,0,94,228,0,0,94,229,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,0,54,156,0,0,60,165,0,0,55,166,0,0,60,175,0,0,67,
185,0,0,61,190,125,20,85,202,251,144,194,238,255,140,206,255,255,41,139,255,255,
28,123,244,255,7,94,225,253,0,88,223,146,0,92,226,0,0,92,227,0,0,93,227,0,0,94,
228,0,0,94,229,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,54,
156,0,0,60,165,0,0,55,166,0,0,60,175,0,0,67,185,0,0,73,194,0,0,71,200,95,15,82,
209,248,126,183,238,255,104,174,244,255,0,88,223,251,0,88,223,116,0,92,225,0,0,
91,225,0,0,92,227,0,0,93,227,0,0,94,228,0,0,94,229,0,255,255,255,0,255,255,255,
0,255,255,255,0,255,255,255,0,0,54,156,0,0,60,165,0,0,55,166,0,0,60,175,0,0,
67,185,0,0,72,193,0,0,79,202,0,0,80,211,77,6,87,218,236,12,95,223,241,0,89,224,
93,0,91,225,0,0,91,225,0,0,91,225,0,0,92,227,0,0,93,227,0,0,94,228,0,0,94,229,
0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0};
static Fl_Image *image_2downarrow() {
  static Fl_Image *image = new Fl_RGB_Image(idata_2downarrow, 22, 22, 4, 0);
  return image;
}

static void cb_C(Fl_Button*, void*) {
  system( " screen -d -m  xterm -e   alsamixer      "  );
}

static const unsigned char idata_amarok[] =
{14,23,60,0,0,3,29,0,4,19,63,0,0,19,92,0,0,18,91,0,0,18,90,0,0,18,95,0,0,24,
119,4,27,64,144,188,55,85,154,248,2,10,43,152,0,22,19,0,0,74,72,2,0,24,20,0,0,7,
2,0,0,3,2,0,14,23,60,0,0,3,29,0,4,19,63,0,0,19,92,0,0,18,92,0,0,18,90,0,0,13,
92,0,19,45,129,160,109,116,140,255,162,162,174,255,45,61,115,251,0,15,15,56,0,
56,50,0,0,32,25,100,0,5,2,12,0,3,2,0,14,23,60,0,0,3,29,0,4,19,63,0,1,19,92,0,0,
18,90,0,0,14,87,0,10,30,106,110,125,136,176,253,144,141,143,255,182,180,180,
255,103,117,161,255,0,17,27,199,0,18,7,49,0,34,19,161,0,29,12,163,0,1,0,0,14,23,
60,0,0,2,29,0,8,23,67,0,14,26,79,0,0,10,60,0,0,16,85,62,109,122,186,247,182,
180,190,255,140,140,137,255,198,196,194,255,148,155,184,255,2,19,41,226,0,38,8,
192,0,25,7,103,0,57,17,232,0,13,1,79,14,23,60,0,0,2,29,0,8,23,67,0,17,27,77,0,0,
2,48,27,54,69,143,231,201,201,255,255,152,151,154,255,135,135,133,255,204,202,
200,255,176,181,199,255,14,21,50,212,0,44,5,195,0,30,6,155,0,58,12,206,0,36,5,
189,13,22,59,0,0,0,23,0,2,18,60,0,6,18,66,4,36,44,104,203,138,140,236,255,179,
178,240,255,121,122,121,255,128,128,127,255,207,207,204,255,195,199,210,255,32,
37,65,227,0,35,0,131,0,51,6,211,0,45,7,173,0,58,6,231,10,19,56,31,6,10,42,93,
20,33,81,156,55,65,127,217,133,135,221,255,129,128,237,255,162,163,223,255,133,
133,140,255,116,116,119,255,197,197,195,255,209,211,219,255,42,46,72,237,0,29,0,
95,0,66,6,229,0,41,5,170,0,66,6,234,61,69,127,229,115,118,194,254,133,135,228,
255,160,160,249,255,152,151,247,255,128,128,236,255,172,172,232,255,165,165,178,
255,148,148,156,255,169,169,167,255,214,216,223,255,43,47,70,240,0,33,0,84,0,71,
6,231,0,43,5,175,0,67,6,234,135,137,200,253,174,172,255,255,153,152,255,255,
152,152,254,255,145,146,248,255,149,149,254,255,181,181,240,255,137,137,157,255,
121,121,136,255,168,167,165,255,212,214,220,255,40,41,61,237,0,41,0,85,0,71,7,
232,0,41,5,178,0,66,6,235,135,137,166,244,183,182,255,255,148,148,255,255,153,
153,255,255,154,154,255,255,154,154,255,255,181,181,246,255,122,122,143,255,91,
91,105,255,189,188,186,255,201,204,211,255,28,27,44,226,0,44,3,107,0,59,7,229,
0,45,7,179,0,62,5,236,88,88,103,220,184,184,253,255,137,138,241,255,134,134,
229,255,144,144,243,255,141,142,242,255,165,165,241,255,108,108,123,255,113,113,
112,255,210,210,209,255,175,176,187,255,10,9,21,204,0,57,10,166,0,38,7,203,0,60,
12,199,0,43,5,225,21,21,25,131,80,81,114,253,58,58,105,255,50,50,90,253,70,70,
127,255,100,99,181,255,127,127,204,255,124,124,145,255,142,142,136,255,209,208,
208,255,146,145,157,255,1,9,8,200,0,50,15,213,0,22,6,144,0,64,18,232,0,15,2,162,
0,0,0,6,0,0,0,107,0,0,0,132,0,0,0,107,0,0,3,138,20,21,45,240,61,61,114,255,
126,126,170,255,149,149,147,255,203,203,205,255,98,98,108,255,0,12,5,204,0,20,
11,147,0,33,16,150,0,41,15,228,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,42,2,2,9,202,72,71,112,254,147,147,162,255,173,174,179,255,43,44,48,
250,0,0,0,93,0,15,15,14,0,35,24,157,0,5,2,106,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,10,138,66,67,78,248,78,78,83,255,4,4,4,196,
0,0,0,2,0,24,24,0,0,11,11,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,4,79,0,0,0,152,0,0,0,46,0,0,0,0,0,22,21,0,
0,14,12,0,0,0,0,0,0,0,0,0};
static Fl_Image *image_amarok() {
  static Fl_Image *image = new Fl_RGB_Image(idata_amarok, 16, 16, 4, 0);
  return image;
}

static void cb_C1(Fl_Button*, void*) {
  system( " screen -d -m  xterm -e    alsamixer   -c 1   "  );
}

static void cb_(Fl_Button*, void*) {
  exit( 0 );
}

static const unsigned char idata_exit[] =
{255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,168,0,0,0,167,0,0,0,164,0,0,0,160,0,0,40,164,3,2,151,177,35,33,230,189,66,
64,250,187,62,60,250,169,31,29,232,145,5,4,158,134,0,0,45,131,0,0,0,123,0,0,0,
120,0,0,0,255,255,255,0,255,255,255,0,168,0,0,0,167,0,0,0,161,0,0,103,188,54,51,
245,227,164,161,255,251,230,228,255,231,206,204,255,229,184,184,255,250,183,180,
255,223,119,115,255,169,38,35,251,127,0,0,118,123,0,0,4,120,0,0,0,255,255,255,0,
255,255,255,0,167,0,0,0,163,0,0,103,201,84,80,255,251,235,233,255,255,255,255,
255,241,225,225,255,198,160,161,255,195,154,154,255,233,159,159,255,255,174,173,
255,249,134,132,255,182,49,46,255,120,0,0,118,120,0,0,0,255,255,255,0,255,255,
255,0,163,0,0,42,188,55,53,247,251,234,232,255,255,255,255,255,237,208,208,255,
228,176,176,255,227,197,197,255,226,197,197,255,216,116,116,255,227,115,115,255,
240,113,114,255,250,98,96,255,159,25,23,252,113,0,0,50,255,255,255,0,255,255,
255,0,164,1,1,150,229,169,165,255,255,255,255,255,219,172,172,255,205,157,157,
255,201,122,122,255,228,193,193,255,228,191,191,255,195,89,89,255,207,162,162,
255,204,79,79,255,247,75,76,255,217,51,50,255,117,3,2,171,255,255,255,0,255,255,
255,0,177,29,24,231,252,163,144,255,238,190,184,255,217,174,175,255,241,225,225,
255,201,95,94,255,228,188,188,255,229,188,188,255,194,61,61,255,239,222,222,255,
221,180,181,255,213,31,30,255,221,49,42,255,133,15,14,240,255,255,255,0,255,255,
255,0,187,55,49,250,250,89,60,255,214,56,47,255,238,232,234,255,221,148,148,255,
228,114,115,255,232,196,196,255,232,199,199,255,219,49,50,255,216,103,102,255,
244,241,241,255,187,47,48,255,197,20,14,255,146,20,18,252,255,255,255,0,255,255,
255,0,185,53,48,250,243,77,51,255,215,64,53,255,237,226,228,255,218,95,92,255,
230,94,90,255,225,155,157,255,225,155,156,255,218,39,36,255,208,47,46,255,241,
232,231,255,193,79,80,255,190,9,5,255,143,17,15,252,255,255,255,0,255,255,255,0,
169,35,32,233,236,86,61,255,218,50,40,255,240,243,244,255,214,75,74,255,200,4,0,
255,197,25,11,255,193,20,11,255,182,1,0,255,200,60,61,255,245,244,245,255,192,
56,57,255,189,10,7,255,127,11,10,242,255,255,255,0,255,255,255,0,148,8,8,159,
216,88,73,255,222,31,18,255,234,183,186,255,237,208,210,255,205,27,27,255,189,0,
0,255,183,0,0,255,193,19,20,255,234,199,200,255,238,204,203,255,182,9,7,255,
179,19,14,255,101,3,3,179,255,255,255,0,255,255,255,0,138,0,0,46,170,43,39,251,
229,78,60,255,217,40,34,255,242,214,216,255,239,227,226,255,228,146,149,255,227,
143,146,255,241,221,222,255,246,227,228,255,198,45,46,255,191,13,9,255,136,13,
11,253,89,0,0,58,255,255,255,0,255,255,255,0,142,0,0,0,130,0,0,115,178,52,48,
255,222,60,45,255,218,37,31,255,233,137,137,255,239,197,198,255,240,199,200,255,
232,146,145,255,204,35,34,255,193,10,8,255,153,15,13,255,88,0,0,131,93,0,0,1,
255,255,255,0,255,255,255,0,143,0,0,0,132,0,0,4,122,0,0,120,156,34,31,254,194,
46,37,255,208,24,17,255,212,21,15,255,210,17,12,255,197,6,3,255,176,11,8,255,
136,12,10,255,88,0,0,135,87,0,0,10,94,0,0,0,255,255,255,0,255,255,255,0,143,0,0,
0,133,0,0,0,123,0,0,0,114,0,0,52,117,7,7,169,135,15,14,240,142,15,12,252,139,
12,9,252,123,9,8,242,101,4,3,177,86,0,0,60,88,0,0,0,89,0,0,0,94,0,0,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0};
static Fl_Image *image_exit() {
  static Fl_Image *image = new Fl_RGB_Image(idata_exit, 16, 16, 4, 0);
  return image;
}

static void cb_C2(Fl_Button*, void*) {
  system( " screen -d -m  xterm -e    alsamixer   -c 2   "  );
}

static void cb_V(Fl_Button*, void*) {
  system( " cd ; screen -d -m pavucontrol   "  );
}

static const unsigned char idata_volume[] =
{255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,0,106,0,0,0,106,0,0,0,105,1,0,0,102,4,0,0,
99,7,0,0,96,9,0,0,93,12,0,0,91,14,0,0,87,17,0,0,85,20,0,0,82,22,0,0,79,25,0,0,
76,27,0,0,73,30,0,0,71,33,0,0,68,35,0,0,65,38,0,0,62,41,0,0,59,44,0,0,51,41,0,
1,46,41,69,2,53,53,167,0,106,0,0,0,106,0,0,0,105,1,0,0,102,4,0,0,99,7,0,0,96,
9,0,0,93,12,0,0,91,14,0,0,87,17,0,0,85,20,0,0,82,22,0,0,79,25,0,0,76,27,0,0,
73,30,0,0,71,33,0,0,68,35,0,0,65,38,0,0,58,37,0,0,48,32,56,27,79,68,177,143,
171,165,255,77,113,112,227,0,106,0,0,0,106,0,0,0,105,1,0,0,102,4,0,0,99,7,0,0,
96,9,0,0,93,12,0,0,91,14,0,0,87,17,0,0,85,20,0,0,82,22,0,0,79,25,0,0,76,27,0,0,
73,30,0,0,71,33,0,0,65,33,0,0,54,28,38,12,71,49,156,104,148,128,251,221,239,
225,255,255,255,255,255,89,122,122,225,0,106,0,0,0,106,0,0,0,105,1,0,0,102,4,0,
0,99,7,0,0,96,9,0,0,93,12,0,0,91,14,0,0,87,17,0,0,85,20,0,0,82,22,0,0,79,25,0,
0,76,27,0,0,72,30,0,0,62,30,33,10,75,44,147,91,147,113,243,190,228,196,255,
242,255,239,255,246,255,245,255,254,255,253,255,88,122,121,225,0,106,0,0,0,106,
0,0,0,105,1,0,0,102,4,0,0,99,7,0,0,96,9,0,0,93,12,0,0,91,14,0,0,87,17,0,0,85,
20,0,0,82,22,0,0,78,25,0,0,69,26,16,0,72,30,122,10,112,33,237,131,209,138,255,
230,255,227,255,229,255,228,255,231,255,231,255,240,255,240,255,254,255,253,255,
88,122,121,226,0,106,0,0,0,106,0,0,0,105,1,0,0,102,4,0,0,99,7,0,0,96,9,0,0,93,
12,0,0,91,14,0,0,88,17,0,0,84,20,0,0,76,21,16,0,76,24,113,20,116,37,223,45,176,
49,255,48,207,47,255,150,238,151,255,223,255,223,255,221,255,221,255,230,255,
230,255,241,255,240,255,253,255,252,255,85,120,119,224,0,106,0,0,0,106,0,0,0,
105,1,0,0,102,4,0,0,99,7,0,0,96,9,0,0,93,12,0,0,90,14,0,0,82,15,5,0,79,18,90,18,
112,32,217,54,176,52,255,70,216,61,255,62,214,56,255,47,203,46,255,146,234,148,
255,222,255,222,255,222,255,222,255,230,255,230,255,241,255,240,255,252,255,251,
255,82,117,117,221,0,106,0,0,0,106,0,0,0,105,1,0,0,102,4,0,0,99,7,0,0,96,9,0,0,
89,10,3,0,84,11,81,19,114,28,201,61,176,54,255,84,220,68,255,80,224,66,255,68,
213,60,255,59,208,54,255,46,202,46,255,146,234,149,255,222,255,222,255,222,255,
222,255,230,255,230,255,241,255,240,255,252,255,251,255,82,117,117,221,0,106,0,
0,0,106,0,0,0,105,1,0,0,102,4,0,0,95,4,0,0,88,5,60,13,109,20,185,62,172,52,
255,99,227,75,255,98,233,75,255,85,222,68,255,76,216,64,255,68,213,60,255,59,
208,54,255,46,202,46,255,146,234,149,255,222,255,222,255,222,255,222,255,230,
255,230,255,241,255,240,255,252,255,251,255,82,117,117,221,0,106,0,0,0,106,0,0,
0,103,0,0,0,94,0,54,15,115,16,174,68,175,52,252,109,228,79,255,115,241,84,255,
103,232,77,255,92,226,72,255,84,222,68,255,76,218,64,255,68,214,60,255,59,209,
54,255,46,203,46,255,147,235,149,255,223,255,223,255,223,255,223,255,231,255,
231,255,242,255,241,255,253,255,252,255,82,117,117,221,0,106,0,0,0,105,0,39,11,
116,9,159,67,171,47,253,126,237,87,255,137,254,95,255,123,245,88,255,112,238,82,
255,103,234,78,255,95,229,74,255,87,225,69,255,78,221,65,255,70,217,61,255,61,
212,55,255,48,206,47,255,151,236,152,255,229,255,228,255,229,255,228,255,237,
255,236,255,248,255,246,255,255,255,255,255,83,117,117,221,0,106,0,100,0,105,0,
212,31,136,22,240,59,164,43,229,53,157,41,225,47,150,38,225,43,147,38,225,41,
144,39,225,38,140,39,225,35,136,39,225,31,134,39,225,28,130,39,225,25,126,39,
225,22,123,39,225,17,119,38,225,54,130,77,225,83,137,106,225,82,134,108,225,86,
132,113,225,90,131,118,225,94,130,124,231,30,76,75,193,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0};
static Fl_Image *image_volume() {
  static Fl_Image *image = new Fl_RGB_Image(idata_volume, 22, 22, 4, 0);
  return image;
}

Fl_Double_Window* make_window() {
  { win1 = new Fl_Double_Window(315, 195, "FLSOUND");
    { Fl_Group* o = new Fl_Group(5, 35, 305, 155);
      o->box(FL_DOWN_BOX);
      { Fl_Button* o = new Fl_Button(10, 50, 295, 45, "    Sound  &Up");
        o->image( image_2uparrow() );
        o->callback((Fl_Callback*)cb_Sound);
        o->align(Fl_Align(256));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 100, 295, 45, "  Sound  &Down");
        o->image( image_2downarrow() );
        o->callback((Fl_Callback*)cb_Sound1);
        o->align(Fl_Align(256));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(10, 160, 65, 25, " C-&0");
        o->image( image_amarok() );
        o->callback((Fl_Callback*)cb_C);
        o->align(Fl_Align(256));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(80, 160, 65, 25, " C-&1");
        o->image( image_amarok() );
        o->callback((Fl_Callback*)cb_C1);
        o->align(Fl_Align(256));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(270, 160, 35, 25);
        o->image( image_exit() );
        o->callback((Fl_Callback*)cb_);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(150, 160, 65, 25, " C-&2");
        o->image( image_amarok() );
        o->callback((Fl_Callback*)cb_C2);
        o->align(Fl_Align(256));
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(220, 160, 45, 25, " V");
        o->image( image_amarok() );
        o->callback((Fl_Callback*)cb_V);
        o->align(Fl_Align(256));
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Box* o = new Fl_Box(5, 5, 305, 25, "  FLSOUND");
      o->box(FL_ENGRAVED_BOX);
      o->image( image_volume() );
      o->labelfont(1);
      o->align(Fl_Align(256));
    } // Fl_Box* o
    win1->end();
    win1->resizable(win1);
  } // Fl_Double_Window* win1
  return win1;
}

int main( int argc, char *argv[]) {
  printf( " == FLTK == \n" );
  
  ////////////////////////////////////////////////////////
    if ( argc == 2)
    if ( strcmp( argv[1] , "" ) !=  0 )
    {
            chdir( argv[ 1 ] );
    }
  
    char mydirnow[2500];
    printf( "Current Directory: %s \n", getcwd( mydirnow, 2500 ) );
  
  
    make_window();
    win1->show();
  
    Fl::run();
}