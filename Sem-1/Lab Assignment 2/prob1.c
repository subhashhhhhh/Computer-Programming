//Subhash Gottumukkala (CO19) Lab Assignment 2 Problem 1
#include <stdio.h>

int main ()
{
	long A,B,C;
	printf("Value of A is: ");
	scanf("%ld" ,&A);
	printf("Value of B is: ");
	scanf("%ld" ,&B);
	
	C=A;
	A=B;
	B=C;
	
	printf("\n After Swapping, value of A is %ld" ,A);
	printf("\n After Swapping, value of B is %ld" ,B);
	
	return 0;
}
