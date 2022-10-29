#include<stdio.h>
int main ()
{
    char i;

    //Asks user for an input
    printf("Enter a Character: ");

    //Scans the input and stores it
    scanf("\n%c", &i);

    //Displays the output
    printf("\nYou entered %c\n", i);
    return 0;
}