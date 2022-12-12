#include<stdio.h>

void main(void) {
	int a = 10;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	printf("%d\n",*******h);  //10

}
