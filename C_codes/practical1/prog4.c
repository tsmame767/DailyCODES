#include<stdio.h>
void main(){
	int mon;
	printf("enter month number:");
	scanf("%d",&mon);
	switch(mon){
		case 1:
			printf("%d has 30 days",mon);
			break;
		case 2:
			printf("%d has 28/29 days",mon);
			break;
		case 3:
			printf("%d has 31 days",mon);
			break;
		case 4:
			printf("%d has 30 days",mon);
			break;
		
		case 5:  
			printf("%d has 31 days",mon);
			break; 
		case 6:
			printf("%d has 30 days",mon);
			break;
		case 7:
			printf("%d has 31 days",mon);
			break;
		case 8:
			printf("%d has 31 days",mon);
			break;
		case 9:
			printf("%d has 30 days",mon);
			break;
		case 10:
			printf("%d has 31 days",mon);
			break;
		default:
			printf("%d is wrong input",mon);
			break;
	}
}
