#include<stdio.h>
void main(){
	int n;
	int count=0;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count=count+1;
		}
	}
		if(count==2){
			printf("%d is prime number\n",n);
		}
		else if(count<2){
			printf("%d is not a prime number\n",n);
		}
}
