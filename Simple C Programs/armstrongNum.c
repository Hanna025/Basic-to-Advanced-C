//ArmstrongHead.h
#include<stdio.h>
#include<math.h>
int armstrong(int);

//ArmstrongImp.c
#include"ArmstrongHead.h"
int armstrong(int a)
{
	int  m,n,c=0,rem=0,res=0;
	m=n=a;
	while(m!=0)
	{
		m=m/10;
		c=c+1;
	}
	while(n!=0)
	{
		rem=n%10;
		res=res+pow(rem,c);
		n=n/10;
	}
	if(res==a)
 		return 1;
	else
		return 0;
}

//ArmstrongApp.c
#include"ArmstrongHead.h"
int main()
{
	int x,result;
	printf("Enter the value for a-\n");
	scanf("%d",&x);
	result=armstrong(x);
	if(result==1)
		printf(" %d Armstrong Number",x);
	else
		printf(" %d Not an Armstrong Number",x);
}

//makefile
Armstrong.exe:ArmstrongImp.o ArmstrongApp.o
        cc -o Armstrong.exe ArmstrongImp.o ArmstrongApp.o -lm
ArmstrongImp.o:ArmstrongImp.c
        cc -c ArmstrongImp.c
ArmstrongApp.o:ArmstrongApp.c
        cc -c ArmstrongApp.c
