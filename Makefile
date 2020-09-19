

all:
	   c++ -lm   -I"/usr/X11R7/include/" -I"/usr/pkg/include" -I /usr/pkg/include/    -L"/usr/pkg/lib"  -L/usr/X11R7/lib -lX11 -I /usr/X11R7/include/   -lfltk   fledit.cxx   -o    fledit   
	   c++ -lm   -I"/usr/X11R7/include/" -I"/usr/pkg/include" -I /usr/pkg/include/    -L"/usr/pkg/lib"  -L/usr/X11R7/lib -lX11 -I /usr/X11R7/include/   -lfltk   flopencalphad.cxx   -o    flopencalphad    


install:
	   cp fledit        /usr/local/bin/fledit 
	   cp flopencalphad /usr/local/bin/flopencalphad 


