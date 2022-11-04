//StudentHead.h

#include<stdio.h>
struct student {
  char name[10];
  int m1,m2,m3;
  int total;
  float  avg;
  char place[10];
};

 void calculate(struct student[],int);
 void display(struct student[],int);
 void Display(struct student[],int);
 void show(struct student[],int);


//StudentImp.c
#include"StudentHead.h"
void calculate(struct student s[10],int n)
{
 int i;
 for(i=0;i<n;i++)
  {
    s[i].total=s[i].m1+s[i].m2+s[i].m3;
    s[i].avg=s[i].total/3.0;
  }
}


void display(struct student s[10],int n)
{
 int i;
 for(i=0;i<n;i++)
  {
   if((s[i].avg)>80)
    {
      printf("Name=%s\nPlace=%s\n",s[i].name,s[i].place);
    }
  }
}


void Display(struct student s[10],int n)
{
 int i,max;
 max=s[0].total;
 for(i=0;i<n;i++)
  {
    if(max<s[i].total)
     max=s[i].avg;
    }
     for(i=0;i<n;i++)
      {
       if(max==s[i].total)

        printf("Name=%s\nPlace=%s\n",s[i].name,s[i].place);
      }
}


void show(struct student s[10],int n)
{
 char p[10]="sivakasi";
 int i;
 for(i=0;i<n;i++)
  {
   if((strcmp(p,s[i].place)==0))
    {
    printf("Name=%s\n",s[i].name);
    printf("Marks=%d\n%d\n%d\n",s[i].m1,s[i].m2,s[i].m3);
    }
  }
}

//StudentApp.c
#include"StudentHead.h"
int main()
{
 struct student s[10];
 int n,op,i;
 printf("Enter the number of students\n");
 scanf("%d",&n);
 printf("Enter the student details\n");
 {
   for(i=0;i<n;i++)
  {
   printf("\nEnter the name of the Student\n");
   scanf("%s",s[i].name);
   printf("\nEnter the place of the student\n");
   scanf("%s",s[i].place);
   printf("\nEnter the marks of the student\n");
   scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
  }
}

do
{
 printf("\nChoose any one\n1.Calculate total and average\n 2.Details of students with marks>80\n")
 printf("3.Details of student with highest marks\n4.Details of students residing in Sivakasi\n5.Exit\n");
 scanf("%d",&op);
 switch(op)
  {
    case 1:
           calculate(s,n);
           for(i=0;i<n;i++)
             {
               printf("Name=%s\n",s[i].name);
               printf("Total is %d\n",s[i].total);
              printf("Average is %f\n",s[i].avg);
             }
           break;
   case 2:
          display(s,n);
          break;
   case 3:
          Display(s,n);
          break;
   case 4:
          show(s,n);
          break;

   case 5:
          exit(0);
          break;
      }
  }
 
  while(op<=5);
 }

//makefile
Student.exe:StudentImp.o StudentApp.o
        cc -o Student.exe StudentImp.o StudentApp.o
StudentImp.o:StudentImp.c
        cc -c StudentImp.c
StudentApp.o:StudentApp.c
        cc -c StudentApp.c
