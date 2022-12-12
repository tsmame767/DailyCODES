#include<stdio.h>
void main(){
	int a;
	int sum=0;
	printf("enter a number");
	scanf("%d",&a);
	for(int i=0;i<=a;i++){
		if(i%3!=0){
			sum=sum+i;
			printf("%d ",i);
		}
	}
	printf("sum of numbers not divisible by 3 is %d",sum);
}
