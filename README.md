# Basic-to-Advanced-C
C programming from the basic concepts to file manipulation

The C programs are in the three file format viz Header , Implementation and Application file and Makefile for compiling all the three files

Dont forget to include the header files of your programs in the implementation and application files.

Execute the program like for eg if your makefile looks like this ->

SI.exe : SIimp.o  SIapp.o
        cc -o SI.exe  SIimp.o  SIapp.o
SIimp.o: SIimp.c
        cc -c SIimp.c
SIapp.o: SIapp.c
        cc -c SIapp.c
        
if you mention SI.exe in your makefile use the command ./SI.exe

