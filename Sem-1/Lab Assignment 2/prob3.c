//Area of Circle
#include<stdio.h>
int main ()
{
	float pi = 3.14;
	int radius;
	printf("value of radius is: ");
	scanf("%d", &radius);
	
	float area = (float) (pi * radius * radius);
	printf("\narea is %f", area);
	return 0;
}
