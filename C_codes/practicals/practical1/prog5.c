#include<stdio.h>
void main(){
	int n;
	printf("enter number from 1-5 :");
	scanf("%d",&n);
	switch(n){
		case 0:
			printf("%d == zero \n",n);
			break;
		case 1:
			printf("%d == one \n",n);
			break;
		case 2:
			printf("%d == two \n",n);
			break;
		case 3:
			printf("%d == three \n",n);
			break;
		case 4:
			printf("%d == four \n",n);
			break;
		case 5:
			printf("%d == five \n",n);
			break;
		default:
			printf("invalid input\n");
			break;
	}
}
