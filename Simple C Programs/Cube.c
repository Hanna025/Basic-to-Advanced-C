//head.h

#include<stdio.h>

int cube(int);

//cubeimp.c

#include "head.h"

int cube(int a)
{
 	int volume;
	volume = a*a*a;
	return volume;
}

//cubeapp.c

#include "head.h"
int main()
{
	int c,res;
	printf("enter the value for c\n");
	scanf("%d",&c);
	res=cube(c);
	printf("volume of the cube is %d",res);
}

//makefile

cube.exe: cubeimp.o cubeapp.o
        cc -o cube.exe cubeimp.o cubeapp.o
cubeimp.o: cubeimp.c
        cc -c cubeimp.c
cubeapp.o: cubeapp.c
        cc -c cubeapp.c

