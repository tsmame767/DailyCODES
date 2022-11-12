#include<stdio.h>
void main(){
	char a,b;
	printf("enter char 1:");
	scanf("%c",&a);
	printf("enter char 2");
	scanf(" %c",&b);
	if(a==b){
		printf("%c == %c",a,b);
	}
	else{
		printf("difference : %d",b-a);
	}
}
