#include<stdio.h>
int* addNumbers(int* num1, int* num2, int* sum);
int main(){
    int number1=32;
    int number2=18;
    int sum;
    
    int* result = addNumbers(&number1, &number2, &sum);
    printf("Sum is %d", *result);
    return 0;
}

int* addNumbers(int* num1, int* num2, int* sum){
    *sum = *num1 + *num2;
}
