//PrimeHead.h
#include<stdio.h>
int prime(int);

//PrimeImp.c
#include"PrimeHead.h"
int prime(int n)
{
int j=0,i;
for(i=1;i<=n;i++)
{
if(n%i==0)
j++;
}
if(j==2)
return 0;
else
return 1;
}

//PrimeApp.c
#include"PrimeHead.h"
int main()
{
int res,a;
printf("Enter the value for a\n");
scanf("%d",&a);
res=prime(a);
if(res==0)
printf(" Prime Number");
else
printf(" Not a Prime Number");
}

//makefile
Prime.exe:PrimeImp.o PrimeApp.o
        cc -o Prime.exe PrimeImp.o PrimeApp.o
PrimeImp.o:PrimeImp.c
        cc -c PrimeImp.c
PrimeApp.o:PrimeApp.c
        cc -c PrimeApp.c
