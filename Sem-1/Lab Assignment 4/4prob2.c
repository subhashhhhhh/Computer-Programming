#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = (int)a / b;
    printf("The division of two numbers is %d", c);
    return 0;
}