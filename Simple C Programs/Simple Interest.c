//Header File
//SIHead.h
#include<stdio.h>
float SI(float,float,float);

//Implemetation File
//SIimp.c
#include"head.h"

float SI ( float a, float b, float c)
{
        float res;
        res=(a*b*c)/100;
        return res;
}

//App File
#include"head.h"
int main()
{
        float p,n,r,result;
        printf("enter the value for p,n,r\n");
        scanf("%f%f%f",&p,&n,&r);
        result= SI(p,n,r);
        printf("SI is %f",result);

}

//makefile
SI.exe : SIimp.o  SIapp.o
        cc -o SI.exe  SIimp.o  SIapp.o
SIimp.o: SIimp.c
        cc -c SIimp.c
SIapp.o: SIapp.c
        cc -c SIapp.c
