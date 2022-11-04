#include<stdio.h>
int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if((num % 5 == 0) && (num % 8 == 0))
	{
		printf("Yep! Given number is divisible by 5 and 8");
	}
	else
	{
		printf("Nope! Given number is not divisible by 5 and 8 :(");
	}
	return 0;
}
