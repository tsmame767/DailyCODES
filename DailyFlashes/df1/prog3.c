#include<stdio.h>
//reverse array
void main(){
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr1[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	int *ptr1=&arr1[0];
	int *ptr2=&arr1[n-1];
	int temp=0;
	for(int i=0;i<n;i++){
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2--;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr1[i]);
	}
	printf("\n");
}
		
		
