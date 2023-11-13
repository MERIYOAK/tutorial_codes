#include <stdio.h>
#include <math.h>
double calculatesd(double data[],int length){
    double sum = 0.0, mean, result=0.0;
    for(int i=0; i<length; i++){
        sum += data[i];
    }
    mean = sum/length;

    for(int i=0; i<length; i++){
        result += (data[i]- mean)* (data[i] - mean);
    }
    result= sqrt (result/length);
    return result;
}
int main (void){
    double data[5]={1,2,3,4,5}, result;
    int length;
    length=(int)sizeof data / sizeof data[0];
    result= calculatesd(data,length);
    printf("standard deviation = %.2lf\n", result);
}