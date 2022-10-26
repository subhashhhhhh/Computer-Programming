#include<stdio.h>
int main ()
{
    printf("Subhash Gottumukkala (34022)\n");

    int a,b,c;
    printf("Enter the x-coordinate of the left bottom vertex: ");
    scanf("%d", &a);

    printf("\nEnter the y-coordinate of the left bottom vertex: ");
    scanf("%d", &b);

    printf("\nEnter the length of a side: ");
    scanf("%d", &c);

    if (c%2==0)
    {
    printf("\nThe centre of the room is at (%d,%d)", a+c/2,b+c/2);
    }

    else {
        printf("\nEnter Valid length of a side");
    }
}