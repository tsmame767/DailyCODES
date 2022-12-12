#include<stdio.h>
//WAP which takes a number from the user store the table of that number in array. store address of elements in
//another array and print the elements using array of pointers
void main(){
	int tarr[10],n;
	int* arr[10];
	printf("enter the number :\n");
	scanf("%d",&n);

	for(int i=1;i<=10;i++){
		tarr[i-1]=n*i;
		arr[i]=&tarr[i];
	//	printf("%p\n",tarr+(i-1) );
		printf("%d\n",*(tarr+(i-1)));
	}
}




