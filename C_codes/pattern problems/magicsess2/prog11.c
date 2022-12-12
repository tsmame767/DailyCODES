#include<stdio.h>
void main(){
	int arr1[5]={3,2,5,4,7},arr2[5];
	int max=arr1[0],jv;
	for(int i=0;i<5;i++){
		max=0;
		for(int j=0;j<5;j++){
			if(arr1[j]>max){
				max=arr1[j];
			}
		jv=j;		
		}
		arr1[jv]=0;
		arr2[i]=max;
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr2[i]);
//		printf("arr2 :\n");
	
	}
}


