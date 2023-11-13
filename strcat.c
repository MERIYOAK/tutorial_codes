#include <stdio.h>
#include <string.h>
int main (void){
    char str1[10]= " c ";
    char str2[10]= " program ";

    strcat(str1,str2);
    strcat(str2,str1);

    puts(str1);
    puts(str2);
}