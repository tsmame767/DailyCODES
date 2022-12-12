#include<stdio.h>
void main(){
	int row,n;
	char c;
	printf("enter the number of rows : ");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		c='A'+(row-1);
		n=row;
		for(int j=0;j<row;j++){
			printf("%c%d ",c,n);
			c--;
			n--;
		}
		printf("\n");
	}
}
