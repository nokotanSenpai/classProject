#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int is_palindrome = 1;
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("'%s' is palindrome\n", str);
    } else {
        printf("'%s' is not palindrome\n", str);
    }
    return 0;
}