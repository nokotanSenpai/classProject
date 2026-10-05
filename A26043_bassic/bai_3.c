#include<stdio.h>

int main(void){
	int num = 1;
	int row;
	
	printf("Nhap so hang: ");
	scanf("%d",&row);
	
	for(int i=1; i <= row; i++){
		for(int j=1; j<=i;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	
	return 0;
}