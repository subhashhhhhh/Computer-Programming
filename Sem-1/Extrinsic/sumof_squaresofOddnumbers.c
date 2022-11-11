#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    sum+=(2*i-1)*(2*i-1);
    printf("\nSum of squares of first %d odd numbers is %d", num,sum);
    return 0;
}
