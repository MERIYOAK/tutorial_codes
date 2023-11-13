#include<stdio.h>
#include<stdlib.h>
int main (void){
    int count;
    FILE *fptr;
    char data [1000];

    if((fptr= fopen("D:\\program.txt","r")) == NULL){
        printf("ERROR! opening file.");
        exit(1);
    }
    fseek(fptr,0, SEEK_SET);
    count = fread(&data, sizeof(char),1000,fptr);

    fclose(fptr);
    data[count] = '\0';

    puts(data);

    return 0;
}