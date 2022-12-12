#include<stdio.h>
void main(){
	int row;
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<row-i;j++){
			printf(" ");
		}
		for(int k=0;k<i+1;k++){
			if(i%2==0){
				if(k%2==0){
					printf("%c",65+(row-1)-k);
				}
				else{
					printf("%c ",97+(row-1)-k);
				}
			}
			else{
				if(k%2==0){
					printf("%c ",97+(row-1)+k);
				}
				else{
					printf("%c ",65+(row-1)+k);
				}
			}
		}
		printf("\n");
	}
}
