#include<stdio.h>
struct person{
    char name[50];
    int age;
};
int main (){
    struct person person1;
    printf("enter name - ");
    fgets(person1.name, sizeof(person1.name), stdin);

    printf("enter age - ");
    scanf("%d", &person1.age);

    printf("name - %s", person1.name);
    printf("age  - %d", person1.age);

}