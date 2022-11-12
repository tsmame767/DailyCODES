#include<stdio.h>
void main(){
	int row;
	printf("enter the rows :\n");
	scanf("%d",&row);
	for(int i=0;i<row;i++){
		for(int j=1;j<=row;j++){
			if(i%2==0){
				printf("%c%d ",'A'+(row-j)+i,i+j);
			}else{
				printf("%c%d ",('a'+(row+i+j)-1)-1,(row+i+1)-j);
			}
		}
		printf("\n");
	}
}
