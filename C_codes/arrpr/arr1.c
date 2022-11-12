#include<stdio.h>
void main(){
	int arr[5] = {10,20,30,40,50};
	printf("%p is arr address \n",arr);

	printf("%d \n",arr[4]);
	printf("%p \n",arr);
	printf("%p \n",&arr);
}
