#include<stdio.h>
typedef struct complex{
    double real;
    double image;
}complex;
complex addnumbers(complex c1, complex c2){
    complex sum;
    sum.real = c1.real + c2.real;
    sum.image = c1.image + c2.image;
    return sum;
}
int main (void){
    complex c1 = {2.5,1.5}, c2 ={2.0,3.5},result;
    result = addnumbers(c1,c2);

    printf("result = %.1lf + %.1lf\n", result.real, result.image);
    printf("over all result will be %.1lf.", (result.real + result.image));
}