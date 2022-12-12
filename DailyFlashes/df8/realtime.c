//Fibonacci Series
#include<stdio.h>
#include<stdlib.h>

typedef struct demo{
	int num;
	struct demo *next;

}node;

int a=0,b=1,c;

node*head=NULL;

int fib_num(){
	
	if(a==0 && b==1){
		return a;
	}
	else{
		//c=a+b;
		//a=b;
		//b=c;
		return a;
	}
	
}


node* createnode(){

	node* new=(node*)malloc(sizeof(node));
	new->num=fib_num();
	c=a+b;
	a=b;
	b=c;


	new->next=NULL;
	return new;

}
void addnode(){
	node*new=createnode();
	
	if(head==NULL){
		head=new;

	}
	else{
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new;
	}
}
void printll(){
	node* temp=head;

	while(temp->next!=NULL){
		printf("|%d|->",temp->num);
		temp=temp->next;
	}
	printf("|%d|\n",temp->num);
}
void main(){
	int n;
	printf("enter no.of nodes:\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		addnode();
	}
	printll();
	printf("THIS IS FIBONACCI SERIES!!\n");

}


