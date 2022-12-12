#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%d ",row-j-1);
				}
				else{
					printf("%c ",'a'+j);
				}
			}else{
				if(j%2==0){
					printf("%c ",'a'+j);
				}
				else{
					printf("%d ",row-j-1);
				}
			}
		}
		printf("\n");
	}
}
							
														
