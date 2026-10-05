#include<stdio.h>

int main(void) {
    int num;
    long sum = 0;

    printf("Input the number of terms: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        long term = 0;

        // Vòng lặp j dùng để tạo ra số term (1, 11, 111,...) và in ra
        for (int j = 1; j <= i; j++) {
            printf("1");
            term = term * 10 + 1; // Tạo giá trị số tương ứng
        }

        sum += term; // Cộng số vừa tạo vào tổng

        // Kiểm tra để không in dấu '+' sau phần tử cuối cùng
        if (i < num) {
            printf(" + ");
        } else {
            printf("\n");
        }
    }

    printf("The Sum is : %ld\n", sum);

    return 0;
}