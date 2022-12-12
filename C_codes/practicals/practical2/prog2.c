#include<stdio.h>
void main(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	int b=a;
	for(int i=1;i<=b;i++){
		printf("%d + %d =%d\n",i,a,a+i);
		a--;
	}
	
}	
