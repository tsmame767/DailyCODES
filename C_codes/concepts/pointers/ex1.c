#include<stdio.h>
void main(){
	int x=10;
	int *ptr=&x;

	printf("%d\n",x);
	printf("%p\n",ptr);

	printf("%d\n",*ptr);
}
