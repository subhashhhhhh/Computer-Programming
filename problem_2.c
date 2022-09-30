#include<stdio.h>
int main ()
{
	int a,b;
	printf("value of a is: ");
	scanf("%d", &a);
	printf("value of b is: ");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping, value of a and b are %d, %d",a,b);
	return 0;
}
