/* WAP to find max among 2 numbers. Take all the values from the
user
Input : 2 4
Output: 4
*/

#include<stdio.h>
void main(){
	int a,b;
	printf("enter number : \n");
	scanf("%d",&a);
	printf("enter number : \n");
	scanf("%d",&b);
	if(a>b){
		printf("%d is greater",a);
	}
	else if(b>a){
		printf("%d is greater",b);
	}
	else{
		printf("both numbers are same");
	}
	
}