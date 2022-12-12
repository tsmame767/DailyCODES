#include<stdio.h>
#include<stdlib.h>    
typedef struct movie{
	int Scrn_n;
	struct movie* next;
}mov;

mov* head=NULL;

void addnode(){
	mov* newnode=(mov*)malloc(sizeof(mov));
	printf("enter Screen number :\n");
	scanf("%d",&newnode->Scrn_n);
	newnode->next=NULL;

	if(head==NULL){
		head=newnode;
	}else{
		mov* temp=head;
		while(temp->next!=NULL){
			
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void printll(){
	int count=counts();
	mov* temp=head;
	
	}
}

int occ(){
	int count=1;
	node*temp=head;
	while(temp!=NULL){

		temp=temp->next;

void main(){
	char ans;
	addnode();
	while(1){
		
		printf("want to add one more :(y/n)\n");
		scanf(" %c",&ans);
		if(ans=='y' || ans=='Y'){
			addnode();
		}
		else if(ans=='n' || ans=='N'){
			break;
		}
	}
		
	
	printll();
	printf("\n");

}
