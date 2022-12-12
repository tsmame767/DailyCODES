#include<stdio.h>
void main(){

	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<row-i;j++){
			printf(" ");

		}
		for(int k=0;k<i+1;k++){
			printf("%d ",k+1);
		}
		printf("\n");
	}
		
}
