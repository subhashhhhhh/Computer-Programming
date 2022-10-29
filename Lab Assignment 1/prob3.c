#include<stdio.h>
int main ()
{
    float i;

    //Asks user for an input
    printf("Enter a Decimal: ");

    //Scans the input and stores it
    scanf("\n%f", &i);

    //Displays the output
    printf("\nYou entered %f\n", i);
    return 0;
}