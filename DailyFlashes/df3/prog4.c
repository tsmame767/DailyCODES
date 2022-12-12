#include<stdio.h>
int add(int* a,int* b){
	return *a+*b;
}
void main(){
	int x,y;
	printf("enter the number :\n");
	scanf("%d",&x);
	printf("enter the number :\n");
	scanf("%d",&y);
	int sum=add(&x,&y);
	printf("addition is %d \n",sum);

}
