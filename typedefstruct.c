#include <stdio.h>
typedef struct complex{
    double real;
    double image;
}complex;
int main (){
    complex c1 = {.real= 10.1,.image= 9.3};
    complex c2 = {.real= 15.2,.image= 5.5};
    complex result;
    result.real= c1.real+c2.real;
    result.image= c1.image+c2.image;

    printf("result = %.1lf +%.1lf",result.real, result.image);

    return 0;
}