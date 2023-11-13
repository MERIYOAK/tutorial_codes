#include <stdio.h>
#include <string.h>
int main (void){
    char str1[20] = "c program";
    char str2[15] = {'p','r','o','g','r','a','m','\0'};
    printf("length of str1 = %zu\n", strlen(str1));
    printf("length of str2 = %zu\n", strlen(str2));
    return 0;

}