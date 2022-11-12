#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int j=1;j<i+1;j++){
			printf("%d ",i+j);
		}
		printf("\n");
	}
}
