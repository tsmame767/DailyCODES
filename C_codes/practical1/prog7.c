#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter value :");
	scanf("%d",&a);
	printf("enter value :");
	scanf("%d",&b);
	printf("enter value :");
	scanf("%d",&c);
	if((a*a)+(b*b)==(c*c)){
		printf("%d %d %d are pythogroian triplets\n",a,b,c);
	}
	else{
		printf("%d %d %d are not pythagorian triplets\n",a,b,c);
	}
}
