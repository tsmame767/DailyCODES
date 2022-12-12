#include<stdio.h>
void main(){

	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<i;j++){
			printf(" ");

		}
		for(int k=0;k<row-i;k++){
			printf("%c ",'A'+(row-1)-i);

		}
		printf("\n");
	}
}


