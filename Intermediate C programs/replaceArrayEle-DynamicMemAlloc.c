//ReplaceHead.h
#include<stdio.h>
#include<stdlib.h>

int replace(int*,int);


//ReplaceImp.c
#include"ReplaceHead.h"
int replace(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    if(a[i]%2==0)
     {
        a[i]=0;
     }
    else
        a[i]=1;
}

//ReplaceApp.c
#include"ReplaceHead.h"
int main()
{
    int i,*a,n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
     {
          printf("Error");
     }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    replace(a,n);
    printf("After replacing\n");
    for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
}

//makefile
Replace.exe:ReplaceImp.o ReplaceApp.o
        cc -o Replace.exe ReplaceImp.o ReplaceApp.o
ReplaceImp.o:ReplaceImp.c
        cc -c ReplaceImp.c
ReplaceApp.o:ReplaceApp.c
        cc -c ReplaceApp.c
