//GradeHead.h
#include<stdio.h>
int grade(int);

//GradeImp.c
#include"GradeHead.h"
int grade (int m)
{
        if(m>=90)
                return 1;

        elseif(m>=80&&m<90)
                return 2;

        elseif(m>=70&&m<80)
                return 3;

        elseif(m>=60&&m<70)
                return 4;

        elseif(m>=50&&m<60)
                return 5;

        else
                return 6;
}


//GradeApp.c
#include"GradeHead.h"
int main()
{
        int a , i;
        printf("Enter your marks:\n");
        scanf("%d",&a);
        i=grade(a);
        if(i==1)
                printf("Grade is O");

        elseif(i==2)
                printf("Grade is A+");

        elseif(i==3)
                printf("Grade is A");

        elseif(i==4)
                printf("Grade is B+");

        elseif(i==5)
                printf("grade is B");

        else
                printf("fail");
}
//makefile
Grade.exe: GradeImp.o GradeApp.o
        cc -o Grade.exe GradeImp.o GradeApp.o
GradeImp.o: GradeImp.c
        cc -c GradeImp.c
GradeApp.o: GradeApp.c
        cc -c GradeApp.c
