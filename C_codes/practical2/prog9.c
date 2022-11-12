#include<stdio.h>
void main(){
	int n,sep;
	printf("enter number ");
	scanf("%d",&n);
	while(n!=0){
		sep = n%10;
		printf("%d",sep);
		n=n/10;
	}
}
