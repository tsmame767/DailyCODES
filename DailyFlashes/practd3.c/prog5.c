#include<stdio.h>
void main(){
	int row,n=1;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			printf("%d ",n);
			n=n+(row-1);

		}
		n=n-(row*2-2);
		printf("\n");
	}
}
