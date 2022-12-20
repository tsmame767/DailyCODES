//Write a program that adds the digits of a data element from a singly linear linked list and changes
//the data.
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
	if(head==NULL){
		printf("no node: \n");

	
	}
	else{
		node*temp=head;
		while(temp->next!=NULL){
			printf("|%d|->",temp->data);

		
			temp=temp->next;
		}
		printf("|%d|\n",temp->data);
	}
}

int add(){
	int sum;
	node* temp=head;
	while(temp!=NULL){
		sum=0;
		
		int sepd,num=(*temp).data;
		while(num>0){
			sepd=num%10;
			sum=sum+sepd;
			num=num/10;
		}
		temp->data=sum;
		temp=(*temp).next;
	}
	return 0;
}

void main(){
	
	addnode();
	addnode();
	addnode();
	addnode();
	addnode();
	printll();
	/*int n;
	printf("Count of number occured the most: \n");
	scanf("%d",&n);
	printf("%d occurence of %d \n",occurence(n),n);
*/
	add();
	printll();

}
