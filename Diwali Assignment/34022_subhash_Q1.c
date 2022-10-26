#include <stdio.h>

int main()
{
    printf("Subhash Gottumukkala (34022)\n");
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    if((num & 1)==1)
    {
        printf("Odd\n", num);
    }
    else
    {
        printf("Even\n", num);
    }

    return 0;
}