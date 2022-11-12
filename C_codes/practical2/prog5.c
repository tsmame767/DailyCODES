#include<stdio.h>
void main(){
	int a,b;
	printf("start range ");
	scanf("%d",&a);
	printf("end range ");
	scanf("%d",&b);
	int c;
	for(int i=b;i>=a;i--){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\n");	
	for(int i=a;i<=b;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}
