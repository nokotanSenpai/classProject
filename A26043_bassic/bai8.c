#include<stdio.h>

int main(void){
    int num= 1;
    int row;
    printf("Input the number of row: ");
    scanf("%d",&row);
    for(int i=1; i<= row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1; k<=i;k++){
            printf("%d ",num);
        }
        printf("\n");
        num++;
    }
    return 0;
}