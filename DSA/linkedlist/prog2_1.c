#include<stdio.h>
#include<stdlib.h>


typedef struct Movie{
	char mname[20];
	float imdb;
	struct Movie *next;

}mov;

mov* head=NULL;

void addnode(){
	mov* newnode=(mov*)malloc(sizeof(mov));

	printf("enter movie name :\n");
	scanf("%s",newnode->mname);

	printf("enter rating :\n");
	scanf("%f",&newnode->imdb);

	newnode->next =NULL;


	if(head==NULL){
		head=newnode;
	}
	else{
		mov*temp=head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
	printf("newnode :%p\n",newnode);
}
void printll(){
	mov*temp=head;
	while(temp!=NULL){
		printf("|%s->%f->%p| ",temp->mname,temp->imdb,temp->next);
		temp=temp->next;

	}
}

int occur(){


}
void main(){
	char ans;
	addnode();
	printll();
	while(1){
		printf("want to add more?(Y/N): \n");
		scanf(" %c",&ans);
		if(ans=='y' || ans=='Y'){
			addnode();
			printll();
		}
		else if(ans=='n' || ans =='N'){
			break;
		}
		else{
			printf("enter valid i/p (y\n)\n");
		}
	}
	printll();
}




