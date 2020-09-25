

# Introduction
This website gives the possibility to use OpenCalphad using a virtual machine. In computing, a virtual machine (VM) is an emulation of a computer system.  The virtual machine of OpenCalphad was designed to run on the platforms: Windows, Mac, and Linux. It uses the host software of the VirtualBox project, which is has the GNU Licensing. 

Screenshot #1: ![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/OC-Screen1.jpg)

# Installation
## 1. Virtualbox
Download the software virtualbox corresponding to your architecture. https://www.virtualbox.org/wiki/Downloads
If necessary, the manual of installation of virtualbox is at the following url: https://www.virtualbox.org/wiki/Documentation
After download, virtualbox needs to be installed.  

Screenshot #2:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Guide-OC-VB-P01.jpg)


## 2. OC-image 
After the installation of virtualbox, you may find the image at the following link.
URL to download the version of OpenCalphad for classroom: https://www.dropbox.com/s/4lab0ipan8e0rrw/virtualbox-debian-opencalphad.zip?dl=0



## 3. Open image file
After the download of the image file of the virtual machine, the files need to be uncompressed. The image is compressed with the regular ZIP compression format. It can be uncompressed with software, like Winzip or Winrar. The "debian-oc.vdi" file is the main file, which will be opened using virtualbox. This will result in the following screenshot (screenshot #3). 

Screenshot #3:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Guide-OC-VM-P01.jpg)


## 4. Start 
After the user can use the context menu of the virtual machine, as indicated in the screenshot (screenshot #4), to start the machine. "Start" will be displayed (screenshot #4). The virtual machine will boot. It will take 1-2 minute(s) of boot time. After the boot of the system, OpenCalphad will be launched directly. The virtual machine is running OC on the Linux operating system. The window manager is IceWM. 

Screenshot #4:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Guide-OC-VM-P02.jpg)




## 5. Using OC
The documentation of OpenCalphad is available at the url: http://www.opencalphad.com/
Please visit the website of OpenCalphad for more information. 
<br/>
<br/>

In the terminal xterm, the command "oc" is available to load and run a macro. 

Example #1: Fe-C system <br/>
` oc macros/map3.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-Fe-C-map3.jpg)
<br/>


Example #2: <br/>
` oc macros/map11.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-Fe-C-map11.jpg)
<br/>


Example #3: Fe-C-Cr system <br/>
` oc macros/map16.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-map16.jpg)
<br/>



Example #4: Al-Fe system <br/>
` oc macros/map17.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-Fe-C-map17.jpg)
<br/>



## 5. Using GUI (under dev)

The GUI of OC is under development. It will be available in a next release (in the vdi image). 

Currently, it can be compiled using the GNU C/C++ Compiler.
The "Makefile" allows to compile flopencalphad on Mac, Linux, and BSD/Unix.<br/>
This project is downloaded on the host machine or Unix/Linux/Mac. 
The ZIP file needs to be decompressed.
It requires the FLTK library and C++ compiler (e.g. CLANG or GCC). 
In order to create the executables, the compilation is possible with ` make all`. <br/>
The installation is possible with ` make install `. 
This will install the
files into the directory /usr/local/bin/.
<br/>
<br/>

Frontend for Fe-C system:<br/>
` flopencalphad ~/macros/ ` 
(Press Return) <br/>


![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-2.png)
<br/>

Frontend/GUI: <br/>
` flopencalphad ~/macros/ ` 
(Click on "Macro" button) <br/>


The "Database" panel allows to select the database (*.tdb file). It allows to list the elements and species, which are available in the database.
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-3.png)

The "Macro" panel gives a preview of the list of commands.
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-8.png)

The "Macro" panel allows to edit and run a list of commands. The button "use macro" will select and setup the macro for the simulations. After selection of the macro, the process "2. Edit", "3. Compute", and "4. Plot" will display the results of the simulations. 
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-4.png)

The panel for "Set-Condition" allows to give the initial parameters.
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-5.png)


# Tutorial

<br/>
The diagram for the Fe-C system can be achieved as follows. <br/>
1. Select in "Database" panel the steel1.TDB database <br/>
2. click on the button "CA" to delete the list of elements in the panel for the "System" field. <br/>
3. Click on "Fe" and "C" buttons. The set-condition field in the "Condition" panel will be proposed by the GUI as follows: " t=1000 p=1e5 n=1 x(c)=0.2 ".<br/>
4. Enter "C" for X for the simulations. <br/>
5. Click on 1.Create, 2.Edit, 3.Compute, and 4. Plot. <br/>

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-5.png)
<br/>



<br/>
The diagram for the Fe-Si system can be achieved as follows. <br/>
1. Select in "Database" panel the steel7.TDB database <br/>
2. click on the button "CA" to delete the list of elements in the panel for the "System" field. <br/>
3. Click on "Fe" and "Si" buttons. The set-condition field in the "Condition" panel will be proposed by the GUI as follows: " t=1000 p=1e5 n=1 x(si)=0.01 ".<br/>
4. Enter "Si" for X for the simulations. <br/>
5. Click on 1.Create, 2.Edit, 3.Compute, and 4. Plot. <br/>

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-6.png)
<br/>

<br/>
The diagram for the Fe-Mn system can be achieved as follows. <br/>
1. Select in "Database" panel the cost507R.TDB database <br/>
2. click on the button "CA" to delete the list of elements in the panel for the "System" field. <br/>
3. Click on "Fe" and "Mn" buttons. The set-condition field in the "Condition" panel will be proposed by the GUI as follows: " t=1000 p=1e5 n=1 x(mn)=0.01 ".<br/>
4. Enter "Mn" for X for the simulations. <br/>
5. Click on 1.Create, 2.Edit, 3.Compute, and 4. Plot. <br/>

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-7.png)
<br/>



--
# Support 

IRC on Freenode
https://webchat.freenode.net/?channels=#opencalphad

# References

[1] Source Code: https://github.com/sundmanbo/opencalphad

[2] Virtualbox: https://www.virtualbox.org/

