#include<stdio.h>
int max(int *arr){
	int *m=arr;
	while(*arr!='\0'){
		if(*arr>*m){
			m=arr;
		}
		arr++;
	}
	return *m;
}
	
void main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	arr[n]='\0';
	printf("maximum element from the given array is %d\n",max(arr));
}
