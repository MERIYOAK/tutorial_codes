#include<stdio.h>
#include<string.h>
int main(void){
    char str1[]= "meron", str2[]="meron";
    int result;
    result = strcmp(str1, str2);
    printf("result  = %d\n", result);
    if(result == 0){
        printf("the strings are equal.");
    }
    else{
        printf("the strings are not equal.");
    }
}