#include<stdio.h>
int main (void){
    char str1[]= "abcd";
    char str2[]= {'a','b','c','d','\0'};
    char str3[5]= {'a','b','c','d','\0'};

    printf("%s\n%s\n%s\n",str1,str2,str3);
}