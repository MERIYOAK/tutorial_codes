#include <stdio.h>
int main (void){
     int i,j,n;
     printf("enter a number: ");
     scanf("%d",&n);
     for(int i=0; i<=n; ++i){
        for(int j=0; j<=n-i+1; j++){
            printf("%c ",n-i+j+64);
        }
        printf("\n");
     }
     return 0;
}