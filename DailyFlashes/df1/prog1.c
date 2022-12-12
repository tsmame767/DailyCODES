#include<stdio.h>
//compare arrays
void main(){
	int n;
	printf("enter the size of arrays:");
	scanf("%d",&n);
	int a1[n];
	int a2[n];
	int diff=n;
	//taking input for both arrays
	for(int i=0;i<n;i++){

		printf("enter value for index %d for arr1:\n",i);
		scanf("%d",&a1[i]);
	}
	
	for(int i=0;i<n;i++){
		printf("enter value for index %d for arr2:\n",i);
		scanf("%d",&a2[i]);
	}
	
	if(sizeof(a1)/sizeof(a1[0]) == sizeof(a2)/sizeof(a2[0])){
		for(int i=0;i<n;i++){
			if(a1[i]==a2[i]){
				diff--;
			}
			else{
				diff++;
			}
		}
	}
	if(diff==0){
		printf("arrays are same\n");
	}
	else{
		printf("arrays are not same \n");
	}
	
	

}
