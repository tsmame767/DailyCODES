#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		int n=1;
		for(int j=1;j<=row;j++){
			if(i%2==0){
				printf("%d ",n);
				n=n+i+1;
			}else{
				printf("%d ",n);
				n=n+i+1;
			}

		}

		printf("\n");
	}
}
																	
