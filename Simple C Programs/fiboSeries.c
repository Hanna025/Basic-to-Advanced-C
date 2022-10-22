//FibonacciHead.h
#include<stdio.h>
int fibo(int);

//FibonacciImp.c
#include"FibonacciHead.h"
int fibo(int b)
{
int i,m=0,n=1,next_term;
for(i=1;i<=b;i++)
{
printf("%d\t",m);
next_term=m+n;
m=n;
n=next_term;
}
}

//FibonacciApp.c
#include"FibonacciHead.h"
int main()
{
int a ,res;
printf("Enter the value for a-\n");
scanf("%d",&a);
res=fibo(a);
}

//makefile
Fibonacci.exe:FibonacciImp.o FibonacciApp.o
        cc -o Fibonacci.exe FibonacciImp.o FibonacciApp.o
FibonacciImp.o:FibonacciImp.c
        cc -c FibonacciImp.c
FibonacciApp.o:FibonacciApp.c
        cc -c FibonacciApp.c
