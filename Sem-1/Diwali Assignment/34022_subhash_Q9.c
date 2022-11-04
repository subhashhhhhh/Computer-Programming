#include<stdio.h>
int main ()
{
    printf("Subhash Gottumukkala (34022)\n");
    int a,b,c;
    printf("Enter the first value : ");
    scanf("%d", &a);
    printf("\nEnter the second value : ");
    scanf("%d", &b);
    printf("\n1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("\nThe value after Addition is %d", a+b);
        break;
        case 2:
        printf("\nThe value after Subtraction is %d", a-b);
        break;
        case 3:
        printf("\nThe value after Multiplication is %d", a*b);
        break;
        case 4:
        printf("\nThe value after Division is %d", a/b);
        break;
        default:
        printf(" Enter Your Correct Choice.");
        break;
    }

}