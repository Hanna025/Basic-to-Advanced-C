//MatrixHead.h
#include<stdio.h>
int product(int[][5],int[][5],int[][5],int,int,int,int);

//MatrixImp.c
#include"MatrixHead.h"
int prod(int A[5][5],int B[5][5],int C[5][5],int r1,int r2,int c1,int c2)
{
	int i,j,k,res;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			C[i][j]=0;
			for(k=0;k<r1;k++)
				{
					C[i][j]=C[i][j]+(A[i][k]*B[j][k]);
				}
		}
	}
}

[19bcs011@mepcolinux ex5]$cat ex5a/MatrixApp.c
#include"MatrixHead.h"
int main()
{
	int r1,c1,r2,c2,i,j,k,A[5][5],B[5][5],C[5][5];
	printf("Enter the rows and columns for matrix 1 and matrix 2\n");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	if(c1==r2)
		{
			printf("Multiplication is possible\n");
			printf("Enter the elements for matrix 1\n");
			for(i=0;i<r1;i++)
				{
					for(k=0;k<c1;k++)
					{
						scanf("%d",&A[i][k]);
					}
				}
	printf("Enter the elements for matrix 2\n");
	for(k=0;k<r2;k++)
		{
			for(j=0;j<c2;j++)
				{
					scanf("%d",&B[j][k]);
				}
		}
	prod(A,B,C,r1,c1,r2,c2);
	printf("\nResultant matrix\n");
	for(i=0;i<r2;i++)
		{
			for(j=0;j<c1;j++)
				{
					printf("%d  ",C[i][j]);
				}
			printf("\n");
		}
	}
	else
		printf("Multiplication is not possible");
}

//makefile
Matrix.exe:MatrixImp.o MatrixApp.o
        cc -o Matrix.exe MatrixImp.o MatrixApp.o
MatrixImp.o:MatrixImp.c
        cc -c MatrixImp.c
MatrixApp.o:MatrixApp.c
        cc -c MatrixApp.c
