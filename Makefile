

all:
	   c++ -lm   -I"/usr/X11R7/include/" -I"/usr/pkg/include" -I /usr/pkg/include/    -L"/usr/pkg/lib"  -L/usr/X11R7/lib -lX11 -I /usr/X11R7/include/   -lfltk   fledit.cxx   -o    fledit   
	   c++ -lm   -I"/usr/X11R7/include/" -I"/usr/pkg/include" -I /usr/pkg/include/    -L"/usr/pkg/lib"  -L/usr/X11R7/lib -lX11 -I /usr/X11R7/include/   -lfltk   flview.cxx   -o    flview    
	   c++ -lm   -I"/usr/X11R7/include/" -I"/usr/pkg/include" -I /usr/pkg/include/    -L"/usr/pkg/lib"  -L/usr/X11R7/lib -lX11 -I /usr/X11R7/include/   -lfltk   flopencalphad.cxx   -o    flopencalphad    



install:
	   cp fledit        /usr/local/bin/fledit 
	   cp flview        /usr/local/bin/flview  
	   cp flopencalphad /usr/local/bin/flopencalphad 



telnet:
	   cc telclient.c -o telclient 
	   cc telserver.c -o telserver  


install-telnet:
	   cp telserver        /usr/local/bin/telserver  
	   cp telclient        /usr/local/bin/telclient  



