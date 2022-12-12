#include<stdio.h>
//WAP to print diff datatype of elements using Void pointer int,char,float,double
void main(){
	int x=10;
	char ch='A';
	float fl=1.5;
	double db=22.22;

	void* iptr=&x;
	void* cptr=&ch;
	void* fptr=&fl;
	void* dptr=&db;

	printf("%d\n",*((int*) iptr));
	printf("%c\n",*((char*) cptr));
	printf("%f\n",*((float*) fptr));
	printf("%lf\n",*((double*) dptr));
}
