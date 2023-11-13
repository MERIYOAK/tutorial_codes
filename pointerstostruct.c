#include<stdio.h>
typedef struct person{
    int age;
    double salary;
}person;
int main(){
    person *personptr, person1;
    person1.age = 30;
    person1.salary = 9384.5;

    personptr = &person1;
    printf("age - %d \n", personptr->age);
    printf("salary - %.2lf\n",personptr->salary);
    }