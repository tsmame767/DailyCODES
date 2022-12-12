#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		char cch='A'+row+i-1;
		char sch='a'+row+i-1;
		for(int j=0;j<row;j++){
			if(i%2==0){
				printf("%c ",cch);
				cch--;
			}else{
				printf("%c ",sch);
				sch--;
			}
		}printf("\n");
	}
}

