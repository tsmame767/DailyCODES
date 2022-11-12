#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		char ch='A'+(row*(row-i))-1;
	//	printf("%d\n",ch);
		for(int j=0;j<row;j++){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}//	3*3-0
//  	74-1=73
//  	3*2
