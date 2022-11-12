#include<stdio.h>
void main(){

/*Write a program to print the value and size of the below variables.Take all
the values from the user
num=10
chr = ‘S’
rs = 55.20
crMoney = 542154313480.544543
*/
	
	int num;
	char chr;
	float rs;
	double crmoney;
	printf("enter num value\n");
	scanf("%d",&num);
	printf("enter chr value\n");
	scanf(" %c",&chr);
	printf("enter rs value\n");
	scanf("%f",&rs);
	printf("enter crmoney value\n");
	scanf("%lf",&crmoney);
	
	printf("%d \n %c \n %f \n %lf \n",num,chr,rs,crmoney);

}