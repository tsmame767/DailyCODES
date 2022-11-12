#include<stdio.h>
void main(){
	int a,b;
	int sum =0;
	int avg=0;
	printf("enter range :");
	scanf("%d",&b);
	for(int i=1;i<=b;i++){
		printf("enter no %d :\n",i);
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("sum is %d \n",sum);
	printf("avg is %d \n",sum/b);
}
