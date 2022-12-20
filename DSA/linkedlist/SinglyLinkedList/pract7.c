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

	while(temp->next!=NULL){
		printf("|%s|->",temp->data);
		temp=temp->next;
	}
	printf("|%s|\n",temp->data);
}


void rev(){
	node * temp=head;
	char str[20];
	while(temp!=NULL){
		strcpy(str,temp->data);
		//str=temp->data;
		int len=strlen(str);
		char tempy;
		for(int i=0;i<len/2;i++){
			tempy=str[i];
			str[i]=str[len-1-i];
			str[len-1-i]=tempy;
			
		}
		printf("%s rev :\n",str);
		strcpy(temp->data,str);
		temp=temp->next;
	}
}
		



void main(){
	int n;
	printf("enter the no.of nodes:\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		addnode();
		printll();
	}
	rev();
	printll();


}


