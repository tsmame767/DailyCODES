#include<stdio.h>
void main(){
	int row,x;
	printf("enter the number of rows : ");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		//x=i;
		for(int j =1;j<=row;j++){
			printf("%d ",i+j);
			//x++;
		}
		printf("\n");
	}	
}
