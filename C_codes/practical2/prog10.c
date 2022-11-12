#include<stdio.h>
void main(){
	int a=0,b=1,n,c;
	printf("enter the number");
	scanf("%d",&n);
	while(a<n){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}
