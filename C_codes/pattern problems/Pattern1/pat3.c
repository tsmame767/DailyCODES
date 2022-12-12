#include<stdio.h>
void main(){
	int row;
	printf("enter the number of rows :\n");
	scanf("%d",&row);
	for(int i =1;i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d",i);
		}
		printf("\n");
	}
}	

