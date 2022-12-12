#include<stdio.h>
void main(){
	int row,n;
	printf("enter the rows :\n");
	scanf("%d",&row);

	for(int i=0;i<row;i++){
		n=(row-1)-i;
		for(int j=0;j<row-i;j++){
			if(i%2==0){
				if(j%2==0){
					printf("%d ",n-i);
					n--;
				}
				else{
					printf("%c ",'a'+j);
				}
			}
			else{
				if(i%2==0){
					if(j%2==0){
						printf("%c ",'a'+i+j);
					}
					else{
						printf("%c ",n-j);
					}
				}
			}
		}
		printf("\n");
	}
}

