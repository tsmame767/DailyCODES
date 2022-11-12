#include<stdio.h>
void main(){
	int row,a;
	printf("enter the number of rows:");
	scanf("%d",&row);
	a=1;
	for(int i=1;i<=row;i++){
		for(int j =0 ; j<row;j++){
			if(j%2==0){
				printf("%d ",a*a);
			}else{
				printf("%d ",a);
			}	
			a++;
		}
		printf("\n");
	}
}
