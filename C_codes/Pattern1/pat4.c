#include<stdio.h>
void main(){
	int row;
	scanf("%d",&row);
	char n='A';
	for(int i =0;i<row;i++){
		for(int j=0;j<3;j++){
			printf("%c ",n++);
		}
		printf("\n");
	}
}
		
		
