#include<stdio.h>
void main(){
	int a;
	int count=0;
	printf("enter number");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0){
			count=count+1;
		}
	}
	printf("%d has %d divisors",a,count);
}
			
