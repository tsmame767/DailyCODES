#include<stdio.h>
void main(){
	int row,n;
	printf("enter the row :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		n=1;
		for(int j=0;j<i+1;j++){
			printf(" ");
		}
		for(int k=0;k<(row-i);k++){
			if(k%2==0){
				printf("%d ",n);
				n++;
			}
			else{
				printf("%c ",'a'+k);
			}
		}
		printf("\n");
	}
}

