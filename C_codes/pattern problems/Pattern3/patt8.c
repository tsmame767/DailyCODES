#include<stdio.h>
void main(){
	int row,n;
	printf("enter the rows :\n");
	scanf("%d",&row);
	n=row*row;
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(i%2==0){
				printf("%d ",n);
			}
			else{
				printf("%c ",(n-1)+'A');
			}
			n--;
		}
		printf("\n");
	}
}

