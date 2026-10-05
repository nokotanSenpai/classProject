#include<stdio.h>

int main(void){

    int row;
    printf("Enter numble of row: ");
    scanf("%d",&row);

    for(int i=0; i < row;i++){
        for(int j=0;j< row-i-1;j++){
            printf("  ");
        }
        long long num=1;
        for(int k=0; k<=i;k++){
            printf("%4lld",num);
            num = num*(i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}