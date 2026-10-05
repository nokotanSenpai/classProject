#include<stdio.h>

int main(void){
     int num;
     int Factorial;
     printf("Input the numble: ");
     scanf("%d,&num");

     for(int i=1; i<= num;i++){
        Factorial *= i;
        printf("%d",Factorial);
     }
     printf("The factorial of %d is: %d",num,Factorial);
    return 0;
}