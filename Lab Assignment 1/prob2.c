#include<stdio.h>
int main ()
{
    int i;
    
    //Asks user for an input
    printf("Enter a Number: ");

    //Scans the input and stores it
    scanf("\n%d", &i);

    //Displays the output
    printf("\nYou entered %d\n", i);
    return 0;
}