//DescHead.h
#include<stdio.h>
int sort(int[],int);

//DescImp.c
#include"DescHead.h"
int sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if(a[j]>a[i])
						{
							t=a[i];
							a[i]=a[j];
							a[j]=t;
						}
				}
		}
}

//DescApp.c
#include"DescHead.h"
int main()
{
	int i,arr[10], res,n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	res= sort(arr,n);
	printf("\nThe sorted elements are\n");
	for(i=0;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
}

//makefile
Desc.exe:DescImp.o DescApp.o
        cc -o Desc.exe DescImp.o DescApp.o
DescImp.o:DescImp.c
        cc -c DescImp.c
DescApp.o:DescApp.c
        cc -c DescApp.c
