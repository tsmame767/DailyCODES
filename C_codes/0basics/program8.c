#include<stdio.h>
void main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<10){
		printf("%d Is Less than 10",n);
	}else if(n>10){
		printf("%d Is greater than 10",n);
	}
}