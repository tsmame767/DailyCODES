#include<stdio.h>
void main(){
	int row;
	printf("enter the rows:\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<row-i;j++){
			printf("%c ",'A'+(row-1)-j);
		}
		printf("\n");
	}
}
