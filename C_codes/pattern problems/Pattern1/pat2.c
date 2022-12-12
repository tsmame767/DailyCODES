#include<stdio.h>
void main(){
	int row;
	printf("enter the number of rows\n");
	scanf("%d",&row);
	for(int i =0;i<row;i++){
		char n='a';
		for(int j =0;j<3;j++){
			if(i%2==0){
				printf("%d",j+1);
			}else{
		
				printf("%c",n);
				n++;
			} 
		}	

		printf("\n");
	}
}
