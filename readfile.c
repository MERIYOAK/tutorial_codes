#include<stdio.h>
#include<stdlib.h>
int main (){
    FILE *fptr;
    char data[1000];
    fptr = fopen("D:\\program.txt","r");

    if(fptr==NULL){
        printf("ERROR!");
        exit(1);

    }
    fscanf(fptr,"%[^\n]",data);
    puts(data);

    fclose(fptr);
}