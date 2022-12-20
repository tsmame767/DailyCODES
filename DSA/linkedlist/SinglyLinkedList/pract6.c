//Write a program that accepts a singly linear linked list from the user.Take a number from the 
//User an print the data of the length of that number. Length of kanha=5

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
	//fgets((*new).data,20,stdin);

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
			printf("%s\n",temp->data);
		}
		temp=temp->next;
		//printf("while\n");

	}
}
void main(){
	addnode();
	printll();

	addnode();
	printll();

	addnode();
	printll();
	//node*temp=head;
	//printf("%s %ld",temp->data,strlen(temp->data));

	
	int n,m;
	
	printf("enter the no. of chars:\n");
	scanf("%d",&n);
	findstrlen(n);
	/*
	for(int i=0;i<n;i++){
		addnode();
		printll();
	}

	printf("enter the number:\n");
	scanf("%d",&m);
	findstrlen(m);
	n=20;
	char str1[5];
	char str2[5]="tush";
	
	scanf("%s",str1);

	printf("%d [%p]\n",&str1,&str1);
	printf("%s\n",str1);
	
	printf("%d [%p]\n",&str2,&str2);
	printf("%s\n",str2);
//	printf("%d [%p]\n",&str3,&str3);*/
}

