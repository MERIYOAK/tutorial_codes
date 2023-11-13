#include <stdio.h>

int main (void){
    int arr[5]= {3,4,1,4,5};
    for(int i= 1; i<5; i++){
        if(arr[0]>arr[i]){
            arr[0]= arr[i];
        }
    }
    printf("%d is the smallest number\n", arr[0]);

}
