#include<stdio.h>
//array of table
void main(){
	int n,arr[10];
	printf("enter the number :\n");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		arr[i-1]=2*i;
		printf("%d ",arr[i-1]);
	}
	printf("\n");
}
