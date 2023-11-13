#include <stdio.h>
void cyclicswap(int *a,int *b,int *c){

    int temp;
    temp= *b;
    *b=*a;
    *a=*c;
    *c=temp;
}
int main (void){
    int a=1,
        b=2,
        c=3;
    cyclicswap(&a,&b,&c);
    printf("values after swapping\n");
    printf("a = %d\nb = %d\nc = %d",a,b,c);

    return 0;
}