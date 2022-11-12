#include <stdio.h>
void main(){
	int n;
	printf("enter the total printable char nums:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%c\n",i+'A');
	}
}

