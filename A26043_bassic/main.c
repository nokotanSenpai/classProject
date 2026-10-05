#include<stdio.h>
#include<string.h>

int main(void){
    int array[2];
    int a,b;
    printf("Nhap so a:");
    scanf("%d",&a);
    printf("Nhap so b:");
    scanf("%d",&b);
    array[0] = a;
    array[1] = b;
    printf("%d", array[0]+array[1]);
    return 0;
}