#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	char data[20];
	struct Node* next;

}node;

node *head=NULL;


node *createnode(){
	node* new=(node*)malloc(sizeof(node));
	printf("enter the data:\n");
	scanf("%s",(*new).data);



	new->next=NULL;
	return new;
}

void addnode(){

	node*new=createnode();
	if(head==NULL){
		head=new;
	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new;
	}
}

void printll(){


	node*temp=head;
	while((*temp).next!=NULL){
		printf("|%s|->",(*temp).data);
		temp=(*temp).next;
	}
	printf("|%s|\n",(*temp).data);
}

void findstrlen(int len){
	node*temp=head;
	
	int size;
	while(temp!=NULL){
		size=strlen(temp->data);
		if(size==len){
			
			printf("|%s|->",temp->data);
		}
		temp=temp->next;
	}
}

void main(){

	int n,m;
	printf("enter no.of nodes:\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		addnode();
		printll();
	}

	printf("enter the chars:\n");
	scanf("%d",&m);

	findstrlen(m);
}
