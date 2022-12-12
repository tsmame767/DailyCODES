#include<stdio.h>
void main(){
	int x,ans,ans1,ans2,ans3;
	x =9 ;
	ans = ++x + x++ + ++x;
	printf("ans = %d \nx = %d \n",ans,x);

	ans1= ++x + ++x + ++x + ++x;
	printf("ans1 = %d \nx = %d \n",ans1,x);

	ans2 = x++ + x++ + ++x + x++ + ++x;
	printf("ans2 = %d \nx = %d \n",ans2,x);

	ans3 = x++ + x++ + x++ + x++;
	printf("ans3 = %d \nx = %d \n",ans3,x);
}