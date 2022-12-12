#include<stdio.h>
void main(){
	int x=10;
	int *ptr1=&x;
	int **ptr2=&ptr1;
//	printf("%d\n",*ptr2);
	printf("x %d\n",*ptr1);
	printf("x & %p\n",ptr1);

	printf("ptr1 %p\n",ptr1);
	printf("ptr1 & %p\n",&ptr1);

	printf("ptr2 %p\n",ptr2);
	printf("ptr2 & %p\n",&ptr2);

	printf("x from ptr1 %d\n",*ptr1);
	printf("x from ptr2 %d\n",**ptr2);

}

	
