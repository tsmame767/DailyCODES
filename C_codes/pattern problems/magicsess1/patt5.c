#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%c ",'A'+(row-1)+i+j);

				}
				else{
					printf("%c ",'a'+(row-1)+i+j);

				}

			}
			else{
				if(j%2==0){
					printf("%c ",'a'+(row-1)+i-j);

				}
				else{
					printf("%c ",'A'+(row-1)+i-j);

				}

			}
		}
		printf("\n");
	}
}
