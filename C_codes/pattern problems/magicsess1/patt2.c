#include<stdio.h>
void main(){
	int n,count=0;
	printf("enter the number :\n");
	scanf("%d",&n);

	while(n>0){
		n=n/10;
		count++;
	}
	printf("digit count is %d \n",count);
}
