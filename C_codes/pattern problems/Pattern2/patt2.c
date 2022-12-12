#include<stdio.h>
void main(){
	int row;
	printf("enter no. of rows : \n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			
			char ch='A'+(row-1);
			if(i%2==0){
				printf("%d ",row-j);
			}
			else{
				printf("%c ",ch-j);
			}
			
		}printf("\n");
	}
}

