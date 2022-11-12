#include<stdio.h>
void main(){

	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b){
		printf("%d  is less than %d",a,b);
	}
	else if(b<a){
		printf("%d is lesser than %d",b,a);
	}
	else{
		printf("both are same");
	}
}
