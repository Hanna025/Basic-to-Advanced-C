//SumHead.h
#include<stdio.h>
int sum();

//SumImp.c
#include"SumHead.h"
int sum(int n)
{
        int i=1,sum=0;
        do
        {
                sum=sum+i;
                i=i+1;
        }
        while (i<=n);
return sum;
}

//SumApp.c
#include"SumHead.h"
int main()
{
        int res,a;
        printf("Enter the value for a\n");
        scanf("%d",&a);
        res=sum(a);
        printf("The sum is %d",res);
}

//makefile
Sum.exe:SumImp.o SumApp.o
        cc -o Sum.exe SumImp.o SumApp.o
SumImp.o:SumImp.c
        cc -c SumImp.c
SumApp.o:SumApp.c
        cc -c SumApp.c
