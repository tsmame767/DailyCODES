#include<stdio.h>
//#include<std.lib>
#include<string.h>
typedef struct player{
	int pnum;
	char pname[20];
	float pavg;


}plyr;

void append(plyr *ptr){
	/*printf("enter plyr num \n");
	scanf("%d",ptr->pnum);
	printf("enter plyr name \n");
	scanf("%s",ptr->pname);
	printf("enter plyr avg \n");
	scanf("%f",ptr->pavg);*/
	ptr->pnum=10;
	strcpy(ptr->pname,"tushar");
	ptr->pavg=10.1;
}
void printd(plyr *ptr){
	printf("%d \n",ptr->pnum);
	printf("%s \n",ptr->pname);
	printf("%f \n",ptr->pavg);
}
void main(){
	plyr obj1,obj2,obj3;
	append(&obj1);
	printd(&obj1);
}
	

