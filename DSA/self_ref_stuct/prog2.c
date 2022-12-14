#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct player{
	int pnum;
	char pname[20];
	float pavg;
	struct player *next;

}plyr;
void printd(plyr *ptr){
	printf("|");
	printf("%d ",ptr->pnum);
	printf("%s ",ptr->pname);
	printf("%f  ",ptr->pavg);
	printf("%p ",ptr);
	printf("|");
}
void main(){
	plyr *newplyr1=(plyr*)malloc(sizeof(plyr));
	plyr *newplyr2=(plyr*)malloc(sizeof(plyr));
	plyr *newplyr3=(plyr*)malloc(sizeof(plyr));
	plyr *head=newplyr1;


	newplyr1->pnum=7;
	strcpy(newplyr1->pname,"dhoni");
	newplyr1->pavg=89.90;
	newplyr1->next=newplyr2;
	
	newplyr2->pnum=18;
	strcpy(newplyr2->pname,"virat");
	newplyr2->pavg=85.90;
	newplyr2->next=newplyr3;
	
	newplyr3->pnum=45;
	strcpy(newplyr3->pname,"rohit");
	newplyr3->pavg=87.90;
	newplyr3->next=NULL;

	printd(newplyr1);
	printf("->");
	printd(newplyr2);
	printf("->");
	printd(newplyr3);

	printf("\n");


}
