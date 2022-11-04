#include<stdio.h>
#include<math.h>
int main()
{
	double P,r,n,t,compound_interest;
	printf("Principal Balance is: ");
	scanf("%lf" ,&P);
	
	printf("\ninterest rate is: ");
	scanf("%lf" ,&r);
	
	printf("\nnumber of times interest applied: ");
	scanf("%lf" ,&n);
	
	printf("\nnumber of time periods: ");
	scanf("%lf" ,&t);
	
	compound_interest = P*(pow((1 + r / n),n*t));
	
	printf("compound interest is %lf" ,compound_interest);
}
