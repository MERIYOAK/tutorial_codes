#include<stdio.h>
struct student{
    char name [50];
    int age;
};
void display(struct student s){
    printf("name - %s\n",s.name);
    printf("age - %d", s.age);
}
int main (void){
     struct student s1 = {"adam",22};
     display(s1);
}