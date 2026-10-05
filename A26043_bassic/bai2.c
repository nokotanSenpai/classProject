#include<stdio.h>

int main(void){
	
	int n;
	printf("Input upto the table number starting from 1 :");
	scanf("%d",&n);
	for(int i=1;i <= n; i++){
		for(int j = 1; j <= 10; j++){
			printf("%d x %d =%d, ",j,i,i*j);
			}
			
		printf("\n");
	}
	
	return 0;
}