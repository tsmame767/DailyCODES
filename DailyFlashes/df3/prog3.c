#include<stdio.h>
//WAP which takes a single input from the user. write a function to find out square,cube store that function pointer in array and access the array.
int cal(int n){
	return n*n,n*n*n;
}
void main(){
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
//	int *(arr[]);
	int as[]=cal(n);
	printf("s %d q %d \n",as[0],as[1]);
}	
