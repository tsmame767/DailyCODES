#include<stdio.h>
void main(){
	int row,n=1;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(i%2==0){
				printf("%d ",n);
			}
			else{
				printf("%d ",n*n);
			}
			n++;
		}
		printf("\n");
	}
}
			
