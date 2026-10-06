#include<stdio.h>
#include<ctype.h>

int main(void){
    char str[100];
    printf("Input a string in lowercase :");
    fgets(str,sizeof(str),stdin);
    for(int i = 0;str[i]!='\0';i++){
        str[i] = toupper(str[i]);
    }
    printf("Here is the above string in UPPERCASE :%s",str);
    return 0;
}