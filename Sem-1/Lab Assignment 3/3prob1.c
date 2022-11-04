#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,d,e,f;
	printf("Enter a number: ");
	scanf("%f", &a);
	
	b=sin(a);
	c=cos(a);
	d=log(a);
	e=pow(a,2);
	f=sqrt(a);
	
	printf("The value of sin is %.4f", b);
	printf("\nThe value of cos is %.4f", c);
	printf("\nThe value of log is %.4f", d);
	printf("\nThe value of square is %.4f", e);
	printf("\nThe value of square root is %.4f", f);
	
	return 0;
	
}
