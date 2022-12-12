#include<stdio.h>
void main(){
	int row,a=1,b=1;
	printf("enter the number of rows :");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j =0;j<row;j++){
			a=a+b;
			printf("%d ",a);
			b=b+2;
		}
		printf("\n");
	}
}

