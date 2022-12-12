#include<stdio.h>
/*
void main(){
	//WAP which will take an array from the user and write a function to find maximum element from the given array
	int n,*max;
	printf("enter the len of arr:\n");
	scanf("%d",&n);
	int arr[n];
	max=&arr[0];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>*max){
			max=&arr[i];
		}
	}
	printf("maximum element in given array is %d \n",*max);
}
*/	
void main(){
	int n,*max;
	printf("enter the number \n");
	scanf("%d",&n);
	int arr[n];
	max=&arr[0];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>*max){
			max=&arr[i];
		}
		
	}
	printf("greatest is  %d\n",*max);
}
