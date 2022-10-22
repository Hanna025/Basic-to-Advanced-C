//SortHead.h
#include<stdio.h>
#include<string.h>
void sort(char[][10],int);

//SortImp.c
#include"SortHead.h"
void sort(char a[][10],int n)
{
	char temp[10];
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if((strcmp(a[i],a[j]))>0)
   					 {
     					 strcpy(temp,a[i]);
     					 strcpy(a[i],a[j]);
     					 strcpy(a[j],temp);
    				 }
				 }
		 }
 }

//SortApp.c
#include"SortHead.h"
main()
{
	char a[10][10];
	int n,i;
	printf("Enter the number of names\n");
	scanf("%d",&n);
	printf("Enter the names\n");
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	sort(a,n);
	printf("The sorted names are\n");
	for(i=0;i<n;i++)
		printf("%s  ",a[i]);
}


//makefile
Sort.exe:SortImp.o SortApp.o
        cc -o Sort.exe SortImp.o SortApp.o
SortImp.o:SortImp.c
        cc -c SortImp.c
SortApp.o:SortApp.c
        cc -c SortApp.c
