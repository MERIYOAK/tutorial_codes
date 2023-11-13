#include<stdio.h>
int main (void){
    char name[30];
    printf("enter name- ");
    fgets(name, sizeof(name),stdin);

    printf("name - ");
    puts(name);
}