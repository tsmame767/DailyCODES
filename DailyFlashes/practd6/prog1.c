#include<stdio.h>
void main(){
	int row,c=0;
	scanf("%d",&row);

	for(int i=0;i<row;i++){

		for(int k=0;k<i;k++){

			printf(" ");
		}
		for(int j=0;j<row-i;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%c ",65+j+c);
				}
				else{
					printf("%c ",97+j+c);
				}
			}
			else{
				if(j%2==0){
					printf("%c ",97+(row-i-j));
				}
				else{
					printf("%c ",65+(row-i-j));
				}
			}
		}
	
		printf("\n");
		if(i%2==0){
			c++;
		}
	}
	
}


