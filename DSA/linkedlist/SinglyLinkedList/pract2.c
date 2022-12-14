//write a program that searches for the second last occurrence of a particular element from a singly linear linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node*next;

}node;

node*head=NULL;

node* createnode(){

	node* new=(node*)malloc(sizeof(node));
	printf("enter the num:\n");
	scanf("%d",&new->data);
	new->next=NULL;
	return new;
}

void addnode(){

	node* new=createnode();

	if(head==NULL){
		head=new;

	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new;											        }
}

void printll(){

	node*temp=head;

	while(temp->next!=NULL){
		printf("|%d|->",temp->data);
		temp=temp->next;
								        }
	printf("|%d|\n",temp->data);

}

void main(){
	int n,ele,count=1;
	printf("enter number of nodes:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		addnode();
		printll();
	}


