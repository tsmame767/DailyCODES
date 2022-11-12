#include<stdio.h>
void main(){
	int row,n;
	printf("enter the rows :\n");
	scanf("%d",&row);

	n=row;
	for(int i=1;i<=row;i++){
		n=row*i;
		for(int j=0;j<row;j++){
			printf("%d ",n);
			n=n+row+i;
		}
	//	n=row*i;
		printf("\n");
	}
}

