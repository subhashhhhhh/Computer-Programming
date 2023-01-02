#include<stdio.h>
typedef struct Complex{
    double real;
    double imagine;
} complex;
int main(){
    complex c1 = {.real=21.34, .imagine=13};
    complex c2 = {.real=92.83, .imagine=21};
    complex c3= {.real=92.42, .imagine=12};
    complex diff;
    
    diff.real=c1.real-c2.real-c3.real;
    diff.imagine=c1.imagine-c2.imagine-c3.imagine;
    printf("The subtraction is %.2lf+%.2lfi",diff.real,diff.imagine);
    return 0;
}