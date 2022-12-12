#include<stdio.h>
void main(){
	int x=10;
	int *ptr1=&x;
	int **ptr2=&ptr1;

	int ***ptr=&ptr2;

	printf("x :%d\n",x);
	printf("x@ptr1 :%p\n",ptr1);
	printf("ptr1@ptr2 %p\n",ptr2);

	printf("ptr :%p\n",ptr);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
	printf("%d\n",***ptr);
	
	
	
	

}
