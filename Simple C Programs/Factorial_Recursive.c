//FactHead.h
#include<stdio.h>
int fact (int);

//FactImp.c
#include"FactHead.h"
int fact (int n)
{
  if(n==1)
    return 1;
  else
    return (n*fact(n-1));
}

//FactApp.c
#include"FactHead.h"
int main()
{
  int N,res;
  printf("Enter the Value for N\n");
  scanf("%d",&N);
  res=fact(N);
  printf("The Factorial is %d",res);
}

//makefile
Fact.exe:FactImp.o FactApp.o
        cc -o Fact.exe FactImp.c FactApp.c
FactImp.o:FactImp.c
        cc -c FactImp.c
FactApp.o:FactApp.c
        cc -c FactApp.c
