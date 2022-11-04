//MenuHead.h

#include<stdio.h>
char rev(char[]);
int len(char[]);
char cat(char[],char[],char[]);
char copy(char[],char[]);

//MenuImp.c
#include"MenuHead.h"
char rev(char str[10])
{
  int i=0,c;
  while(str[i]!='\0')
    {
      c++;
      i++;
    }

  while(c>0)
  {
    c--;
    printf("%c",str[c]);
  }
}

int len(char str[10])
{
  int i=0,c=0;
  while(str[i]!='\0')
    {
      c++;
      i++;
    }
  return c;
}

char cat(char str1[10], char str2[10],char str3[10])
{
  int i=0,j=0;
  while(str1[i]!='\0')
    {
      str3[j]=str1[i];
      i++;
      j++;
    }
  int c=i;
  while(str2[c]!='\0')
    {
      str3[j]=str2[c];
      c++;
      j++;
    }
  str3[j]='\0';
}

char copy(char dest[10],char src[10])
{
  int i=0;
  while(src[i]!='\0')
    {
      dest[i]=src[i];
      i++;
    }
  
  dest[i]='\0';
}

//MenuApp.c
#include"MenuHead.h"
int main()
{
    int i,j,n,res;
    char a[10],b[10],c[10];
    do
    {
      printf("Choose any number\n 1.Reverse\n 2.Length\n 3.Concatenate\n 4.Copy\n 5.Exit\n");
      scanf("%d",&n);
      switch(n)
        {
          case 1:
                  printf("Enter the string\n");
                  scanf("%s",a);
                  rev(a);
                  break;

          case 2:
                  printf("Enter a string\n");
                  scanf("%s",a);
                  res=len(a);
                  printf("Length is %d",res);
                  break;

          case 3:
                  printf("Enter a string\n");
                  scanf("%s",a);
                  printf("Enter another string\n");
                  scanf("%s",b);
                  cat(b,a,c);
                  printf("Strings after concatenations is %s\n");
                  puts(c);
                  break;

         case 4:
                  printf("Enter a string\n");
                  scanf("%s",b);
                  copy(a,b);
                  printf("The string is\n");
                  puts(a);
                  break;

        case 5:
                  exit(0);
                  break;
      }
    }
   while(n<5);
}

//makefile
Menu.exe:MenuImp.o MenuApp.o
        cc -o Menu.exe MenuImp.o MenuApp.o
MenuImp.o:MenuImp.c
        cc -c MenuImp.c
MenuApp.o:MenuApp.c
        cc -c MenuApp.c
