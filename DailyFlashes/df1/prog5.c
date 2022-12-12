#include<stdio.h>
void main(){
	int row,col,sum=0;
	printf("enter the rows ");
	scanf("%d",&row);
	printf("enter the cols ");
	scanf("%d",&col);
	int arr[row][col];

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("enter the array elements ");
			scanf("%d",&arr[i][j]);
			if(arr[i][j]%2!=0){
				sum=sum+arr[i][j];
			}
		}
	}
	printf("sum of odd element is %d\n",sum);
}



