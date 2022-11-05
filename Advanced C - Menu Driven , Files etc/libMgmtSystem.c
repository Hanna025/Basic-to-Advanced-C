//LibHead.h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
  char name[10];
  char author[10];
  int id;
};

void display(struct book*,int);
void update(struct book*,int);

//LibImp.c
#include"LibHead.h"
void display(struct book *b,int n)
{
  int i,id_no;
  printf("Enter the id to be searched\n");
  scanf("%d",&id_no);
  for(i=0;i<n;i++)
    {
      if(id_no==(b+i)->id)
        {
          printf("**********Book Details********\n");
          printf("Name=%s\tAuthor=%s\tid=%d\n",(b+i)->name,(b+i)->author,(b+i)->id);
        }
    }
}


void update(struct book *b,int n)
{
    int i,id,newid;
    char new_name[10],new_auth[10];
    printf("Enter the book id to update\n");
    scanf("%d",&id);
    for(i=0;i<n;i++)
      {
          if(id==(b+i)->id)
            {
               printf("Enter the new name\n");
               scanf("%s",new_name);
               strcpy((b+i)->name,new_name);
               printf("Enter new Author name\n");
               scanf("%s",new_auth);
               strcpy((b+i)->author,new_auth);
               printf("Enter the new id\n");
               scanf("%d",&newid);
               (b+i)->id=newid;

               printf("\n****Updated details****\n");
               printf("Name=%s\tid=%d\tAuthor name=%s\n",(b+i)->name,(b+i)->id,(b+i)->author);
           }
     }
}




//LibApp.c
#include"LibHead.h"
int main()
{
  struct book *b;
  int i,op,n;
  printf("Enter the number of books\n");
  scanf("%d",&n);
  b=(struct book *)malloc(n*sizeof(struct book));
  for(i=0;i<n;i++)
    {
        printf("Enter the book name\n");
        scanf("%s",(b+i)->name);
        printf("Enter the book id\n");
        scanf("%d",&(b+i)->id);
        printf("Enter the author name\n");
        scanf("%s",(b+i)->author);
    }
  do
    {
        printf("\nchoose any one\n1.Display the details of the book for the id entered\n2.Update the book details for entered id\n3.Exit\n");
        scanf("%d",&op);
        switch(op)
          {
              case 1:
                     display(b,n);
                     break;
              case 2:
                     update(b,n);
                     break;
              case 3:
                     exit(0);
                     break;
        }
    }
  while(op<=3);
}

//makefile
Lib.exe:LibImp.o LibApp.o
        cc -o Lib.exe LibImp.o LibApp.o
LibImp.o:LibImp.c
        cc -c LibImp.c
LibApp.o:LibApp.c
