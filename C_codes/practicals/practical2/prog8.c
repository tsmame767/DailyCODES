#include<stdio.h>
void main(){
	int n,pro=1,sep;
	printf("enter number : ");
	scanf("%d",&n);
	while(n!=0){
		sep=n%10;
		pro=pro*sep;
		n=n/10;
	}
	printf("product of digits is %d ",pro);
}
		

