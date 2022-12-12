#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n ");
	scanf("%d",&row);

	for(int i=1;i<row;i++){
		for(int j=0;j<row;j++){

			if(i%2!=0){
				printf("%d ",i*j*(row)-1);
			}
			else{
				printf("%d ",i*(row-1)+(j-1));
			}
		}
		printf("\n");
	}
}


