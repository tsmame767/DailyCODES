#include<stdio.h>
void main(){
	int row,n;
	printf("enter the number " );
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		n=row+i;
		for(int j=0;j<row;j++){
			printf("%d ",n);
			n--;
		}
		printf("\n");
	}
}
