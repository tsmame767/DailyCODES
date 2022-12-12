#include<stdio.h>
void main(){
	int a,b,c;
	printf("1st no : ");
	scanf("%d",&a);
      	printf("2nd no : ");
        scanf("%d",&b);
	printf("3rd no : ");
	scanf("%d",&c);
	if(a<b && a<c){
		printf("%d is min",a);
	}
	else if(b<a && b<c){
		printf("%d is min",b);
	}
	else{
		printf("%d is min\n",c);
	}

}
