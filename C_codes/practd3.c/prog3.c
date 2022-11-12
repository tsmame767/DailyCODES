#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=0;j<i+1;j++){
			if(j%2==0){
				printf("%c ",'a'+i);
			}
			else{
				printf("%c ",'A'+i);
			}
		}
		printf("\n");
	}
}
