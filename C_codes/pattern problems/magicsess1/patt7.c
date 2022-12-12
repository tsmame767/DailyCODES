#include<stdio.h>
void main(){

	int row,a=0,b=1,c;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<i+1;j++){
			printf("%d ",a);
			c=a+b;
			a=b;
			b=c;
		}
		printf("\n");
	}
}
