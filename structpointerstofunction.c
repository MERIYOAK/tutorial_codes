#include<stdio.h>
typedef struct complex{
    double real;
    double image;
}complex;
void addnumbers(complex c1, complex c2, complex *sum){
    sum->real = c1.real + c2.real;
    sum->image= c1.image + c2.image;
}
int main (void){
    complex c1 = {1.5,3.5}, c2 = {2.5,6.5}, result;
    addnumbers(c1,c2,&result);
    printf("result = %.1lf + %.1lf", result.real , result.image);
}