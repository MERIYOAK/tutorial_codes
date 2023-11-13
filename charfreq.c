#include<stdio.h>
int main (void){
    char str[] = "c programming is interesting.";
    char ch = 'e';
    int frequency=0;
    for(int i=0; str[i] != '\0'; ++i){
        if(str[i] == ch){
            ++frequency;
        }
    }
    printf("frequency of %c = %d\n",ch,frequency);
    return 0;
}