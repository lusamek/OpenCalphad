

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



Example #2: <br/>
` oc macros/map11.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-Fe-C-map11.jpg)



Example #3: Fe-C-Cr system <br/>
` oc macros/map16.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-map16.jpg)




Example #4: Al-Fe system <br/>
` oc macros/map17.OCM ` 
(Press Return)

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/Example-OC6-Fe-C-map17.jpg)




Frontend for Fe-C system:<br/>
` flopencalphad ~/macros/ ` 
(Press Return) <br/>
The "Makefile" allows to compile flopencalphad on Mac, Linux, and BSD/Unix.<br/>

![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-2.png)


Frontend/GUI: <br/>
` flopencalphad ~/macros/ ` 
(Click on "Macro" button) <br/>


The "Database" panel allows to select the database (*.tdb file). It allows to list the elements and species, which are available in the database.
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-3.png)

The "Macro" panel allows to edit and run a list of commands.
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-4.png)

The panel for "Set-Condition" allows to give the initial parameters.
![](https://raw.githubusercontent.com/lusamek/OpenCalphad/master/flopencalphad-5.png)


--
# References

[1] Source Code: https://github.com/sundmanbo/opencalphad

[2] Virtualbox: https://www.virtualbox.org/

