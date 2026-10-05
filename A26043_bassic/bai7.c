#include<stdio.h>

int main(void){

    int num;
    int sum=0;
    int even=0;
    printf("Input the number of terms:");
    scanf("%d",&num);

    printf("The even numbers are:");
    for(int i=0; i <num;i++){
        even += 2;
        sum += even;
        printf("%d ",even);
    }
    printf("\n");
    printf("The Sum of even Natural Number upto %d terms: %d",num,sum);
    return 0;
}