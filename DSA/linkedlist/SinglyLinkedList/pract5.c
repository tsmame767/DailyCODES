//write a program that searches all the palindrome data elements from a singly linked list
//and prints the position of palindrome data
#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;

}node;

node *head=NULL;


struct node *createnode(){
	node* new=(node*)malloc(sizeof(node*));
	printf("enter the data:\n");
	scanf("%d",&new->data);


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
	node * temp=head;

	while((*temp).next!=NULL){
		printf("|%d|->",(*temp).data);
		temp=(*temp).next;
	}
	//printf("|%d|\n",temp->next->data);
	printf("|%d|\n",(*temp).data);

}

void SrchPalindrome(){
	struct node* temp = head;
	int count=1;
	while(temp!=NULL){
		int sum=0,sep,data=(*temp).data;
		while(data>0){
			sep=data%10;
			sum=sum*10+sep;
			data=data/10;
		}
		if(sum==(*temp).data){
			printf("Palindrome found at %d\n",count);
		}
		count++;
		temp=(*temp).next;
		
	}
}
void main(){

	int n;
	printf("enter no. of nodes\n");
	scanf("%d",&n);

	while(n>0){
		addnode();
		printll();
		n--;
	}
	SrchPalindrome();
/*
	addnode();
	printll();

	addnode();
	printll();

	addnode();
	printll();

	addnode();
	printll();
	*/
}
