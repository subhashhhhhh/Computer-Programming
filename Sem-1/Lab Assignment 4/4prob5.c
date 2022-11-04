#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
        printf("The entered character is a capital letter.");
    else if (a >= 'a' && a <= 'z')
        printf("The entered character is a small letter.");
    else if (a >= '0' && a <= '9')
        printf("The entered character is a digit.");
    else
        printf("The entered character is a special symbol.");
    return 0;
}