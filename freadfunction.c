#include<stdio.h>
#include<stdlib.h>
int main (void){
    FILE *fptr;
    char data [1000];
    int count;

    if((fptr= fopen("D:\\program.txt","r"))== NULL){
        printf("ERROR! opening file");
        exit(1);
    }
    count = fread(&data, sizeof(char),1000, fptr);
    fclose(fptr);

    data[count] = '\0';
    puts(data);
    return 0;
}