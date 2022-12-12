/*Write a program, take a number and print whether it is positive or
negative. Take all the values from the user
Input: var=5
Output: 5 is a positive number
Input: var=-9
Output: -9 is a negative number*/

#include <stdio.h>
void main(){
	int var;
	printf("enter number : ");
	scanf("%d",&var);
	if(var>0){
		printf("%d is positive",var);
	}else if(var<0){
		printf("%d is negative",var);
	}else{
		printf("%d is nor negative nor positive");
	} 
}