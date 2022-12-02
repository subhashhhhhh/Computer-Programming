#include<stdio.h>
int main()
{
	int x,fact=1,n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(x=1;x<=n;x++)
	fact=fact*x;
	printf("Factorial of given number is %d", fact);
	return 0;
}
