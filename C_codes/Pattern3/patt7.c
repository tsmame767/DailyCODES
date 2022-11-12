#include<stdio.h>
void main(){
	int row,n=0;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		for(int j=i;j<row+i;j++){
			if(n%2==0){ 
				printf("%d ",j*j*j);
			}
			else{
				printf("%d ",j*j);
			}
			n++;
		}
		printf("\n");
	}
}
