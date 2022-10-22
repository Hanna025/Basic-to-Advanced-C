//LeapHead.h

#include<stdio.h>
int year (int);

//LeapImp.c
#include"LeapHead.h"
int year (int a)
{
        if(a%400==0&&a%100!=0||a%400==0)
                return 1;
        else
                return 0 ;
}

//LeapApp.c
#include"LeapHead.h"
int main()
{
        int i,a ;
        printf("Enter any year:\n");
        scanf("%d",&a);
        i= year(a);
        if (i==1)
                printf("Leap year");
        else
                printf("Not a Leap year");
}

//makefile
Leap.exe:LeapImp.o LeapApp.o
        cc -o Leap.exe LeapImp.o LeapApp.o
LeapImp.o:LeapImp.c
        cc -c LeapImp.c
LeapApp.o:LeapApp.c
        cc -c LeapApp.c

