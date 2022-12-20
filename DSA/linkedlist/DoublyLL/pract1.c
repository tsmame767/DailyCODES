#include<stdio.h>
#include<stdlib.h>

typedef struct Node{

	struct Node* prev;
	int data;
	struct Node* next;

}node;

node* head=NULL;

node* createnode(){
	node*newnode=(node*)malloc(sizeof(node));

	printf("enter data:\n");
	scanf("%d",&newnode->data);

	newnode->prev=NULL;
	newnode->next=NULL;
}

void addnode(){
	node*new=createnode();

	if(head==NULL){
		head=new;
		head->prev=NULL;
		head->next=NULL;
	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new;
		temp->next->prev=temp;
	}
}
void printll(){
	node* temp=head;

	while(temp->next!=NULL){
		printf("|%d|<->",temp->data);
		temp=temp->next;
	}
	printf("|%d|\n",temp->data);
}

void main(){
	
	addnode();
	printll();

	addnode();
	printll();

	addnode();
	printll();

	node* temp=head->next;
	printf("prev :%d\n",temp->prev->data);
	printf("next :%d\n",temp->next->data);
}
