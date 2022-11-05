//CopyHead.h
#include<stdio.h>
#include<ctype.h>
void copy(FILE*,FILE*);

//CopyImp.c
#include"CopyHead.h"
void copy(FILE*fp1,FILE*fp2)
{
 	char ch,fn2;
	if(fp1==NULL)
 	printf("Error\n");
 	else if(fp2==NULL)
 	printf("Error\n");
 	else
	  {
   		 ch=getc(fp1);
    	 while(ch!=EOF)
     		{
      			 ch=toupper(ch);
       		     fprintf(fp2,"%c",ch);
       		     ch=getc(fp1);
     		}
 	}

 	fclose(fp1);
 	fclose(fp2);
 	printf("Copied Sucessfully\n");

}

//CopyApp.c
#include"CopyHead.h"
int main()
{
	 char fn1[10],fn2[10],ch;
 	 FILE*fp1,*fp2;
	 printf("Enter the Source file name\n");
	 scanf("%s",&fn1);
	 fp1=fopen(fn1,"r");	
	 printf("Enter the Destination file name\n");
	 scanf("%s",&fn2);
	 fp2=fopen(fn2,"w");
	 copy(fp1,fp2);

}

//makefile
Copy.exe: CopyImp.o CopyApp.o
        cc -o Copy.exe CopyImp.o CopyApp.o
CopyImp.o: CopyImp.c
        cc -c CopyImp.c
CopyApp.o: CopyApp.c
        cc -c CopyApp.c
