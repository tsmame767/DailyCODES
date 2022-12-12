/*: Write a program, take a character and print whether it is in
UPPERCASE or lowercase. Take all the values from the user
Input: var = A
Output: You entered the UPPERCASE character*/

#include<stdio.h>
void main(){
	char var;
	scanf(" %c",&var);
	printf("enter char\n");
	printf("%c",var);
	if(var>=65 && var<=90){
		printf("You entered an UPPERCASE character %c",var);

	}else{
		printf("you entered a LOWERCASE character %c",var);
	}
}