#include<stdio.h>
#include"cs50.h"
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main (void){
    string s = get_string("s - ");
    string t = malloc(strlen(s)+1);

    strcpy(t,s);

    t[0] = toupper(t[0]);
    printf("s - %s\n",s);
    printf("t - %s\n",t);

    free(t);
}