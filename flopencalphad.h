// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef flopencalphad_h
#define flopencalphad_h
#include <FL/Fl.H>
void redraw();
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *win1;
#include <FL/Fl_Box.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
extern Fl_Output *output_system;
#include <FL/Fl_Input.H>
extern Fl_Input *input_var_calc_x;
extern Fl_Input *input_var_calc_y;
extern Fl_Input *input_var_tdb_database;
#include <FL/Fl_Browser.H>
extern Fl_Browser *flfront_preview_browser1;
extern Fl_Double_Window *win2;
extern Fl_Browser *browser1;
extern Fl_Input *input_notes;
extern Fl_Double_Window *win3;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *checkbutton_single_console;
extern Fl_Check_Button *checkbutton_xterm_console;
extern Fl_Double_Window *win4;
extern Fl_Browser *flplot_preview_browser;
extern Fl_Input *plot_gnuplot_term_drivername;
extern Fl_Check_Button *plot_gnuplot_term_driver_force;
extern Fl_Double_Window *win5;
extern Fl_Browser *browser2;
extern Fl_Input *input_var_macro_filename;
extern Fl_Browser *browser_macro_filecontent;
extern Fl_Double_Window *win6;
extern Fl_Input *input_var_set_condition;
extern Fl_Input *input_var_calc_ymin;
extern Fl_Input *input_var_calc_ymax;
extern Fl_Input *input_var_calc_ystep;
extern Fl_Input *input_var_calc_xmin;
extern Fl_Input *input_var_calc_xmax;
extern Fl_Double_Window *win7;
extern Fl_Input *dev_path_input1;
Fl_Double_Window* make_window();
void addkeypress( int keypress );
int main( int argc, char *argv[] );
void void_flfront_preview_browser1_refresh();
void void_plot_preview_plotfile();
int ncopysetterm( const char *foofileout,  const  char *foofilein, const  char *fooxdriver  );
#endif
