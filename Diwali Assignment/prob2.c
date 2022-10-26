#include<stdio.h>
int main ()
{
    printf("Subhash Gottumukkala (34022)\n");

    int a,b;
    printf("Enter No. of Students: ");
    scanf("%d", &a);

    printf("\nEnter no. of teams: ");
    scanf("%d", &b);

    printf("\nThe number of students in each team is %d and left out is %d\n", a/b,a%b);
    return 0;
}