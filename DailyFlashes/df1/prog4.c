#include<stdio.h>
//3D array sum of elements
void main(){
	int plane,row,col,sum=0;
	printf("enter the plane ");
	scanf("%d",&plane);
	printf("enter the row ");
	scanf("%d",&row);
	printf("enter the col ");
	scanf("%d",&col);
	int arr[plane][row][col];
	
	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				printf("enter arr element ");
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				sum=sum+arr[i][j][k];
			}
		}
	}
	printf("sum of array elements %d \n",sum);

}
