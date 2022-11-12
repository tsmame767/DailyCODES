/*Write a program to check if a character is a vowel or
consonant. Take all the values from the user
Input: var= ”A”;
Output: A is a vowel.
Input: var= ”D”;
Output: D is a consonant*/

#include <stdio.h>
void main(){
	char var;
	printf("enter capital char: ");
	scanf(" %c",&var);
	if(var==65 || var==69 || var==73 || var==79 || var==85){
		printf("%c is a Vowel",var);
	}else{
		printf("%c is a consonant",var);
	}
	
}