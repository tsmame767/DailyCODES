#include<stdio.h>
void main(){
	int year;
	printf("enter year :\n ");
	scanf("%d",&year);
	if(year%100==0 && year%4==0 ){
		printf("%d is a leap year",year);
	}	
	else{
		printf("%d is not leap year",year);
	}

}	
