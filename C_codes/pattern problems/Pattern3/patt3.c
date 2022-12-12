#include<stdio.h>
void main(){
	int row,n;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		n=row;
		char ch='a';
		for(int j=0;j<row;j++){
			if(j%2==0){
				printf("%d ",n);
				n--;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}printf("\n");
	}
}
																			
