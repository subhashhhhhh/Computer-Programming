#include<stdio.h>
int main ()
{
    printf("Subhash Gottumukkala (34022)\n");

    float a,b,c,d;
    printf("Price of old scooter: ");
    scanf("%f", &a);

    printf("\nRepair amount: ");
    scanf("%f", &b);

    printf("\nSelling price: ");
    scanf("%f", &c);

    printf("\nGain percentage is %.2f", ((c - (a + b)) / (a + b) )*100);

}
