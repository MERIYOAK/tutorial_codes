#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE* fptr;
    fptr = fopen("D:\\program.txt", "w");

    if (fptr == NULL){
        printf("ERROR!");
        exit(1);
    }
    fprintf(fptr,"files are cool.");
    fclose(fptr);
}