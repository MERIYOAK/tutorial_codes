#include <stdio.h>
void printstring(char str[]);

int main (void){

    char str[10]= "hey there";
    printstring(str);
}
void printstring(char str[]){
    printf("string output - ");
    puts(str);
}