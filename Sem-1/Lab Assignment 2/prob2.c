#include<stdio.h>
int main ()
{
	long a,b;
	printf("value of a is: ");
	scanf("%ld", &a);
	printf("value of b is: ");
	scanf("%ld", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping, value of a and b are %ld, %ld",a,b);
	return 0;
}
