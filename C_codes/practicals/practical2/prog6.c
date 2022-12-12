#include<stdio.h>
void main(){
	int n,sep,sum,count=0;
	printf("enter number : ");
	scanf("%d",&n);

	while(n!=0){
		
		count=count+1;
		n=n/10;
	}
	printf("count %d ",count);
}



