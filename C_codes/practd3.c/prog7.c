#include<stdio.h>
void main(){
	int n,c=0;
	printf("enter the number :\n");
	scanf("%d",&n);
	int temp =n;
	while(temp>0){
		int sep=n%10;
		c=c+sep;
		temp=temp/10;
	}
	if(n%c==0){
		printf("harshad\n ");
	}
	else{
		printf("not harshad\n");
	}
}


		
