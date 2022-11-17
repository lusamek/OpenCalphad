

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




## 2. OC-image with terminal 

After the installation of virtualbox, you may find the image at the following link.
URL to download the version of OpenCalphad for classroom: https://www.dropbox.com/s/4lab0ipan8e0rrw/virtualbox-debian-opencalphad.zip?dl=0

The image is destined to the console/terminal usage. The GUI applications are not provided in this above image. 
(See below for images with the OC with GUI).


## 3. Open image file
After the download of the image file of the virtual machine, the files need to be uncompressed. The image is compressed with the regular ZIP compression format. It can be uncompressed with software, like Winzip or Winrar. The "debian-oc.vdi" file is the main file, which will be opened using virtualbox. This will result in the following screenshot (screenshot #3). 

Screenshot #3:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Guide-OC-VM-P01.jpg)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/vdi-image-explorer.png)


## 4. Start the virtual image 
After the user can use the context menu of the virtual machine, as indicated in the screenshot (screenshot #4), to start the machine. "Start" will be displayed (screenshot #4). The virtual machine will boot. It will take 1-2 minute(s) of boot time. After the boot of the system, OpenCalphad will be launched directly. The virtual machine is running OC on the Linux operating system. The window manager is IceWM. 

Screenshot #4:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Guide-OC-VM-P02.jpg)




# Live Image for Pendrive

A live image for USB-Stick/Pendrive with OC and some utils for chemistry / material sciences is available.

The image can be copied on a pendrive or directly on harddisk. It contains the distribution OpenSUSE and OpenCalphad. The utility allows to calculate and compare results with the web. It is bootable on PC using a pendrive with the EFI / UEFI.  

Image: https://archive.org/download/material-simulation-image/image-opensuse-leap-master-amd64-axel-OC-kalzium-version1.1.img.gz

It requires an USB-Stick/pendrive larger than 32 GB (>= 32GB). 
To create the live pendrive:
zcat image-opensuse-leap-master-amd64-axel-OC-kalzium-version1.1.img.gz  > /dev/sdX 

On Windows, you may use rawrite.
https://www.netbsd.org/~martin/rawrite32/download.html

It is beta / early testing and with few features. It allows to use OC, Kalzium for chemistry,... 


![](images/rawrite-hw-1.jpg)



# Quick Start: Using OC
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


 
 
 
# Graphical User Interface

The graphical user interface (GUI) of OC is under development. 
An image of the virtual machine with the GUI OC is available for download at the following Link. 
<br> 
<br>
The image of first release v0.1 is available at the following link: https://drive.google.com/file/d/14aJRksYz4pKwuMBolMNSc3sxOllR8QNZ/view?usp=sharing  <br/>
(md5 checksum: 57ff8cc52de02868de4d255a9c6b140b virtualbox-debian-opencalphad-GUI-v1.1.zip) <br/>
<br>

The image of the second release v0.2 is available at the following link: https://drive.google.com/file/d/1QpcMUm6gPCDYn_kI7C0EAm74955F71OJ/view?usp=sharing
 <br/>
(md5 checksum: 453a7bd35393a1ef615c903c7526a20c  virtualbox-debian-opencalphad-GUI-release-0.2.zip) <br/>
<br>

The image of the release v0.31 is available at the following link: https://drive.google.com/file/d/1CBgLcKOFzHgVwEf4Nt2ra_2HgwBKXZ9G/view?usp=sharing
<br/>
(md5 checksum: 1780fa953a0099ea59770c7a31616bf4  virtualbox-debian-opencalphad-GUI-release-0.31.zip) <br/>
<br>

Release v0.32, 2021/06/06:
https://gitlab.com/lusamek/opencalphad/-/raw/main/version-3.2/virtualbox-debian-opencalphad-GUI-release-0.32.zip
<br/>
<br/>


Virtualbox on Linux: <br/>
Kernel and headers for Ascii/Stretch: https://www.dropbox.com/sh/p21btpcbt8d0lf6/AABMbmwVGKGjm1LBvjPxgx7Ca?dl=0
<br/>

Currently, the GUI can be compiled using the GNU C/C++ Compiler.  
The "Makefile" allows to compile flopencalphad on Mac, Linux, and BSD/Unix. 
This project is downloaded on the host machine or Unix/Linux/Mac. 
The ZIP file needs to be decompressed. It requires the FLTK library and C++ compiler (e.g. CLANG or GCC). 
In order to create the executables, the compilation is possible with ` make all`. 
The installation is possible with ` make install ` using root access. This will install the files into the directory /usr/local/bin/. The command `echo $PATH ` will display the default PATH for executables.  As user, the GUI can be started by the following command from the directory, where it was compiled : 
` ./flopencalphad ~/macros   ` 


Screenshot of Virtual Machine running the GUI:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/gui-vm-oc-screenshot-1.png)


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



<br/>



<br/>

The GUI allows to use gnuplot-x11 (or gnuplot-qt) to plot the results. The results can be viewed and there is a zoom option with gnuplot-x11.
This allows to use use the cursor for the position (x,y) as well. An example is shown for the Ag-Cu system:

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-prev-4.png)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-prev-5.png)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-prev-6.png)


<br/>
<br/><br/>







# Fe-C System  
<br/>

The Fe-C phase diagram can be calculated with OC.
<br/>
The possibility to overlay different diagrams is as well given.
Plot the metastable Fe-C diagram and overlay the stable: <br/>


Fe-C phase diagram (metastable): 
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Fe-C-(metastable)-01.png)

Fe-C phase diagram (metastable) with GUI:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Fe-C-(metastable)-01-GScr.png)


![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Fe-C-2Types-01.png)
<br/>
<br/>






# Studying Phase Diagram 
<br>

Phase diagram can be studied using OC. 

Example of calculations:

![](images/1668092060-screenshot.png)


The plot can be changed in order to study the phase diagram. The user select a given X/Y scale and click on "Plot".
Some examples for Fe-C, Cu-Ni, and Ag-Cu systems are shown in following Figures.
<br><br>




### Fe-C phase diagram, metastable, calculated with OC

The macro for Ag-Cu is provided in this website under the directory "macros".

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/images/1623442950-Fe-C-2pct-metastable-v1.png) 
<br><br>



### Ag-Cu phase diagram calculated with OC


![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/edu-material/Ag-Cu-edu-1-LS.png)


The macro for Ag-Cu is provided in this website under the directory "macros".

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-1.png)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-det1.png)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-det2.png)
<br><br>








# Customizing the Plots and Advanced Plot
<br/>


The plot can be edited and modified. Scaling x and/or y is possible.
Editing the GNUPLOT plot is as well possible.

![](images/1668091143-screenshot.png)


<br/>
<br/>




# Advanced Calculations

<br/>
The diagram shows the use of advanced plot for specific examples. <br/>

Example of calculating speciation in a gas and plot y, H and Cp:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Chemistry-pic01.png)
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Chemistry-pic02.png)

Example of OC calculation for the Cr-Fe system:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Plot-Fe-Cr-Gui.png)

Example of OC macro file for the RE-W system (M. Palumbo, S.G. Fried, T. Hammerschmidt et al.):
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Chemistry-pic03.png)

Example of plot showing the property diagram for a High Speed Steel (HSS):
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Chemistry-pic04.png)


Example of plot showing the calculation of phase fractions and property diagram for SAF2507:
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Gui-Advanced-Plots-Chemistry-pic08.png)


Example of ternary, calculating the isothermal section at 1200K for the Cr-Fe-Ni system:
![](https://github.com/lusamek/OpenCalphad/blob/master/Gui-Advanced-Plots-Chemistry-pic05.png)


Example of calculating G curves for the Ag-Cu system at 1000K:
![](https://github.com/lusamek/OpenCalphad/blob/master/Gui-Advanced-Plots-Chemistry-pic07.png)




Example of calculating G curves for the Fe-Mo system at 1400K:
![](https://github.com/lusamek/OpenCalphad/blob/master/Gui-Advanced-Plots-Chemistry-pic06.png)



<br/>
<br/>



# Further examples: systems and phase diagrams 
<br/>



Cu-Ni System:

![](images/1667217043-screenshot-2.png)



Cu-Ni phase diagram calculated with OC:

![](https://github.com/lusamek/OpenCalphad/blob/master/images/Cu-Ni-Phase-diagram-drawing.svg)
<br><br>




Pb-Sn phase diagram calculated with OC:

 

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/edu-material/Pb-Sn-edu-1-LS.png)







![](images/1668090322-screenshot.png)

![](images/1668090387-screenshot.png)

![](images/1668090433-screenshot.png)





![](images/1668092021-screenshot.png)


![](images/1668092038-screenshot.png)


![](images/1668675149-screenshot.png)


![](images/1668691542-1-Al-Cu.png)

![](images/1668691542-2-Al-Mg.png)

![](images/1668691542-3-Al-Si.png)

![](images/1668691542-4-floccalc-example-t1.png)






<br/>
<br/>
 



# Utils
<br/>

Diffusion
<br/>

Several utils for materials science are included for calculation of diffusion,...

Example of plot showing the diffusion of elements (C and Fe) in host metal Fe: 
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/GUI-Materials-Diffusion-Plot-01.png)

<br/>
<br/>




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











# Contribution

<br/>
The opensource graphical user interface using Linux/BSD libraries is under development. The database of OC are available on this webpage under the directory "macros" (https://github.com/lusamek/OpenCalphad/tree/master/macros). The GUI allows users to login to a platform on IRC for scientific exchanges and sharing experiences. This is avaiable in the window "Option" using the button "Development and Support".

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Ag-Cu-System-FLOC-gnuplot-x11-prev-7.png)

<br/>

--





# User support and development

IRC Channel for user exchange: 

https://kiwiirc.com/nextclient/irc.libera.chat/?channels=#opencalphad



# Acknowledgments

 
Bo Sundman, S. Fries, Chunhui Luo, B. Hallstedt, B. Grzegorczyk, A. Grajcar, A. Menager,... 
L.Samek.


# References

[1] OpenCalphad Website: https://www.opencalphad.org

[2] Source Code: https://github.com/sundmanbo/opencalphad

[3] Virtualbox: https://www.virtualbox.org/

