//SumHead.h
#include<stdio.h>
#include<stdlib.h>

int sum(int**,int,int);

//SumImp.c
#include"SumHead.h"
int sum(int**a,int r ,int c)
{
  int i,j,sum=0;
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
            if(i==j)
               {
                 sum=sum+a[i][j];
               }
        }
   }
  return sum;
}

//SumApp.c
#include"SumHead.h"
int main()
{
    int i,j,r,c,**a,res;
    printf("Enter the rows and columns for the matrix\n");
    scanf("%d%d",&r,&c);
    a=(int**)malloc(r*sizeof(int));
    for(i=0;i<r;i++)
      {
        a[i]=(int*)malloc(c*sizeof(int));
      }
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
           {
              scanf("%d",&a[i][j]);
           }
     }
    res=sum(a,r,c);
    printf("The sum of the diagonal elements is%d",res);
}
