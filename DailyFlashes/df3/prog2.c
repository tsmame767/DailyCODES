#include<stdio.h>
//WAP which will take an array from the user and write a function to find the minimum element from a given array.
int min(int *arr){
	int* m=arr;
	while(*arr!='\0'){
		if(*arr<*m){
			m=arr;
		}
		arr++;
	}
	return *m;
}

void main(){
		int n;
		printf("enter the len of array :\n");
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		arr[n]='\0';

		printf("The minimum element in the given array is %d\n",min(arr));
	
}
