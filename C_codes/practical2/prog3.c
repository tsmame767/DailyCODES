#include<stdio.h>
void main(){
	int a,count,sum;
	printf("enter the number:");
	scanf("%d",&a);
	count=0;
	sum=0;
	printf("the divisors are ");
	for(int i=1;i<=a;i++){
		if(a%i==0){
			printf(" %d",i);
			count++;
			sum=sum+i;
		
		}
	}
	printf("\n");
	printf("count : %d\n",count);
	printf("sum : %d \n",sum);
}
