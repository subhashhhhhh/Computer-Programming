#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is an even number.", a);
    else
        printf("%d is an odd number.", a);
    if (a > 0)
        printf("%d is a positive number.", a);
    else
        printf("%d is a negative number.", a);
    return 0;
}
