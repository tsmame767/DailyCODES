#include<stdio.h>
void main(){
	int row,r;
	scanf("%d",&row);

	for(int i=0;i<row;i++){

		for(int j=0;j<row-i;j++){
			printf(" ");
		}
		r=(i*2)+1;
		for(int k=0;k<i*2+1;k++){
			printf("%d ",r);
			r--;
		}
		printf("\n");
	}
}
