#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter angle :");
	scanf("%d",&a);
	printf("enter angle :");
	scanf("%d",&b);
	printf("enter angle :");
	scanf("%d",&c);

	if((a+b+c)==180){
		printf("triangle is valid\n");
	}
	else{
		printf("triangle is invalid\n");
	}
}
