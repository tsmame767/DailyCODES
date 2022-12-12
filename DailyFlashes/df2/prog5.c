#include<stdio.h>
void main(){
	int x,y,*ptrx,*ptry,sum;
	printf("enter the number :\n");
	scanf("%d",&x);
	printf("enter the number :\n");
	scanf("%d",&y);
	ptrx=&x;
	ptry=&y;
	sum=*ptrx+*ptry;

	printf("%d\n",sum);
}


