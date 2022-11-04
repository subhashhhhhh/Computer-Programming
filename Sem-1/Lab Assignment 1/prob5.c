#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter a number: ");
    scanf("\n%d", &a);

    printf("\nEnter another number: ");
    scanf("\n%d", &b);

    printf("\nAddition is %d, Subtraction is %d, Multiplication is %d\n", a+b,a-b,a*b);
    return 0;

}