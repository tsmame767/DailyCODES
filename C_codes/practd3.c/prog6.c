#include<stdio.h>
void main(){
	int n,fact=1;
	printf("enter the number :\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial of %d id %d :",n,fact);
}
