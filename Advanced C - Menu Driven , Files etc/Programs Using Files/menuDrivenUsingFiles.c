//PlayerHead.h
#include<stdio.h>
struct player
{
	char name[10];
	int jersey;
};

void search(struct player[],int,FILE*);
void display(struct player[],FILE*,int);

//PlayerImp.c
#include"PlayerHead.h"
void search(struct player p[10],int n ,FILE*fp)
{
 	if(fp==NULL)
 	printf("Error");
 	int i,no;
 	printf("Enter the jersey number to be searched\n");
 	scanf("%d",&no);
    fwrite(&p,sizeof(p[0]),n,fp);
  	for(i=0;i<n;i++)
     {
       if(p[i].jersey==no)
         { 
            printf("Name=%s\t Jersey no=%d",p[i].name,p[i].jersey);
        }
    }
}

void display(struct player p[10],FILE*fp,int n)
{
    if(fp==NULL)
    printf("Error");
    int i;
    fwrite(&p,sizeof(p[i]),n,fp);
    for(i=0;i<n;i++)
      {
        if(p[i].name[0]=='A')
          {
            printf("Name=%s\tJerseynumber=%d",p[i].name,p[i].jersey);
          }
       }

    fclose(fp);
}

///PlayerApp.c
#include"PlayerHead.h"
int main()
{
	struct player p[10];
	FILE*fp;
	int i,n,op;
	printf("Enter the number of players\n");
	scanf("%d",&n);
	printf("Enter the Player details\n");
	for(i=0;i<n;i++)
	 {
		printf("Enter the name of the player\n");
		scanf("%s",p[i].name);
		printf("Enter the jersey number of the player\n");
		scanf("%d",&p[i].jersey);
	}
	
	fp=fopen("data.txt","wb");
	do
	{
		printf("\nChoose any one\n1.Display the player details for entered jersey number\n2.Display the name of the player starting with A\n3.Exit\n");
		scanf("%d",&op);
		switch(op)
		{
 			case 1:
        			search(p,n,fp);
        			break;
 			case 2:
        			display(p,fp,n);
        			break;
 			case 3:
       				exit(0);
        			break;
		}
	}
	while(op<=5);
}

//makefile
Player.exe:PlayerImp.o PlayerApp.o
        cc -o Player.exe PlayerImp.o PlayerApp.o
PlayerImp.o:PlayerImp.c
        cc -c PlayerImp.c
PlayerApp.o:PlayerApp.c
        cc -c PlayerApp.c
