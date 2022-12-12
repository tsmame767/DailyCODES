#include<stdio.h>
void main(){
	int num,i,x=0;
	printf("enter number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			x=x+1;
		}
	}
	if(x==2){
		printf("%d is prime \n",num);
	}else{
		printf("%d is not prime \n",num);
	}
}
