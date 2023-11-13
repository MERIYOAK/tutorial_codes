#include<stdio.h>
struct employe{
    int age;
    double salary;
}persons[3];
int main (void){
    for(int i=0;i<3;++i){
        printf("for employe %d ", i+1);
        printf("\nenter age - ");
        scanf("%d", &(persons+i)->age);
        printf("enter salary - ");
        scanf("%lf",&(persons+i)->salary);
    }
    for(int i= 0; i<3; ++i){
        printf("employe %d\nage = %d\nsalary = %.lf.\n",i+1, (persons+i)->age, (persons+i)->salary);
    }
    return 0;
}