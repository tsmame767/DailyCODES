#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=row;i>0;i--){
		for(int j=0;j<row;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}


