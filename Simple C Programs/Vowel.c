//VowelHead.h
#include<stdio.h>
int comp(char);

//VowelImp.c
#include"VowelHead.h"
int comp(char n)
{
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
                return 1;
        else
                return 2;
}

//VowelApp.c
#include"VowelHead.h"
int main()
{
        char b;
        int op;
        printf("Enter character-\n");
        scanf("%c",&b);
        op=comp(b);
        switch(op)
        {
                case 1:
                        printf("Is a vowel");
                        break;

                case 2:
                        printf("Not a vowel");
                        break;

                default:
                        printf("Invalid input");
                        break;
        }
}

//makefile
Vowel.exe:VowelImp.o VowelApp.o
        cc -o Vowel.exe VowelImp.o VowelApp.o
VowelImp.o:VowelImp.c
        cc -c VowelImp.c
VowelApp.o:VowelApp.c
        cc -c VowelApp.c
