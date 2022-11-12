#include<stdio.h>
void main(){
	int row,n;
	printf("enter the rows :\n");
	scanf("%d",&row);
	n=row*row;
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			printf("%d ",n*2);
			n--;
		}
		printf("\n");
	}
}	
