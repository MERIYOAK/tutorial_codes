#include<stdio.h>
struct employe{
    int age;
    double salary;
}employee[3];
int main (void){
    for(int i=0;i<3;++i){
        printf("for employe %d ", i+1);
        printf("\nenter age - ");
        scanf("%d", &employee[i].age);
        printf("enter salary - ");
        scanf("%lf",&employee[i].salary);
    }
    for(int i= 0; i<3; ++i){
        printf("employe %d\nage = %d\nsalary = %.lf.\n",i+1, employee[i].age, employee[i].salary);
    }
    return 0;
}
