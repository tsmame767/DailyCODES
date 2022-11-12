#include<stdio.h>
void main(){
	int row,a=1;
	printf("enter the number of rows " );
	scanf("%d",&row);
	for(int i =0 ; i<row ; i++){
		for(int j=0;j<row;j++){
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
		
}
