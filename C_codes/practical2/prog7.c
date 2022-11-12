#include<stdio.h>
void main(){
	int n,sum=0,sep;
	printf("enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		sep=n%10;
		sum=sum+sep;
		n=n/10;
	}
	printf("sum of digits is %d ",sum);
}
