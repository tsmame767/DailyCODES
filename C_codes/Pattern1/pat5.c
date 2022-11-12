#include<stdio.h>
void main(){
	int row;
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		char a = 'A'+i;
		for(int j = 0;j<row;j++){
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}
