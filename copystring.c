#include <stdio.h>

void copystring(char *str1, char *str2);
int main (void){
    char str1[]= "c programming", str2[100];
    copystring(str1, str2);
    printf("str2 = %s", str2);

    return 0;

}
void copystring(char *str1, char *str2){
    while (*str1 != '\0'){
        *str2=*str1;

        ++str1;
        ++str2;
    }
    *str2 = '\0';
}