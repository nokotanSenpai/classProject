#include<stdio.h>

int main(void){
	int row;
	int num = 1;
	
	printf("Nhap so hang:");
	scanf("%d",&row);
	
	for(int i = 1; i <= row; i++){
		for(int j = 1; j <= row-i;j++){
			printf("  ");
		}
		for(int k = 1; k <= 2 * i -1; k++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}