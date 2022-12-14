  #include<stdio.h>
#include<stdlib.h>
typedef struct nodes{

	int data;
	struct nodes* next;

}node;

node*head=NULL;

//1
int counts(){
	node* temp=head;
	int counter=0;
	while(temp!=NULL){
		counter++;
		temp=temp->next;
	}
	return counter;
}

//2
node* createnode(){
	node* newnode=(node*)malloc(sizeof(node));

	printf("enter data:\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;

	return newnode;

}

//3
void addnode(){

	node* new=createnode();

	if(head==NULL){
		head=new;
	}else{
		node* temp=head;

		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=new;
	}

}

//4
void printll(){
	node* temp=head;

	while(temp->next!=NULL){
		printf("|%d|->",temp->data);
		temp=temp->next;
	}
	printf("|%d|\n",temp->data);
}


//5
void addfirst(){

	node *new=createnode();
	if(head==NULL){
		head=new;
	}else{
	new->next=head;
	head=new;
	}

	
}


//6
void addlast(){
	addnode();
}

//7
int addatpos(int pos){

	int count=counts();
	if(pos<=0 || pos>=count+2){
		printf("invlid node position\n");
		return -1;
	}
	else{
		if(pos==1){
			addfirst();
		}
		else if(pos==count+1){
			addnode();
		}
		else{
			node* new=createnode();
			node*temp=head;
			while(pos-2){
				temp=temp->next;
				pos--;
			}
			new->next=temp->next;
			temp->next=new;
		}
	}

}


//8
void deletefirst(){

	node* temp=head;
	
	if(head==NULL){
		printf("no node");
	}
	else{
	head=temp->next;
	free(temp);
	}
}


//9
void deletelast(){
	int count=counts();
	node* temp=head;
	
	if(head!=NULL){
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}

}


//10
int deleteatpos(int pos){

	node* temp1=head;
	node* temp2=head;
	int count=counts();

	if(pos<=0 || pos>count){
		printf("Invalid node pos\n");
		return -1;

	}
	else{
		if(pos==1){
			deletefirst();
		}
		else if(pos==count){
			deletelast();

		}
		else{
			while(pos-2){
				temp1=temp1->next;
				temp2=temp2->next;
				pos--;
			}
			temp2=temp2->next;

			temp1->next=temp2->next;
			
			free(temp2);
		}
	}
	
}

void main(){
	
	
	while(1){		
		int n;
		char result;
	//	printf("want to continue?: ");
	//	getc(stdin);
		scanf(" %c",&result);
		if(result=='y'){
			printf("1.addnode\n");
			printf("2.addfirst\n");
			printf("3.addlast\n");
			printf("4.addatpos\n");
			printf("5.deletefirst\n");

			scanf("%d",&n);
			if(n==1){
				addnode();
			//	printll();
			}
			else if(n==2){
				addfirst();
			//	printll();
			}
			else if(n==3){
				addlast();
			//	printll();
				
			}
			else if(n==4){
				int p;
				printf("enter pos\n");
				scanf("%d",&p);
				addatpos(p);
			//	printll();
				
			}
			else if(n==5){
				deletefirst();
			//	printll();
			}
			else{
				printf("invalid");
			}
		

		}
		else{
			printf("breaked\n");
			break;
		}
		printll();
	}
/*
	addnode();
	printll();
	
	addnode();
	printll();
	
	addnode();
	printll();
	
	addnode();
	printll();
	
	addnode();
	printll();
	
	printf("done adding nodes !\n");
	
	printf("adding first :\n");
	addfirst();
	printll();

	addfirst();
	printll();
		
	printf("adding last :\n");
	addlast();
	printll();

	printf("adding at pos 3 :\n");
	addatpos(3);
	printll();

	printf("adding at pos 7 :\n");
	addatpos(7);
	printll();

	for(int i=0;i<4;i++){
		printf("deleting node %d \n",i+1);
		deleteatpos(i+1);
		printll();
	}

	deletefirst();
	printf("deleted first\n");
	printll();


	deletelast();
	printf("deleted last\n");
	printll();

*/

}









