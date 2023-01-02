#include<stdio.h>
typedef struct Person{
    int age;
    double salary;
} person;
int main(){
    person person1={.age = 25, .salary = 245687.90};
    person person2={.age = 49, .salary = 34765.89};
    printf("Age of person1 is %d and his salary is %.2lf\n", person1.age,person1.salary);
    printf("Age of person2 is %d and his salary is %.2lf", person2.age,person2.salary);
    return 0;
}