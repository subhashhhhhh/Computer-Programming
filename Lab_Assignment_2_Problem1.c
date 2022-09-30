//Subhash Gottumukkala (CO19) Lab Assignment 2 Problem 1
#include <stdio.h>

int main ()
{
	int A,B,C;
	printf("Value of A is: ");
	scanf("%d" ,&A);
	printf("Value of B is: ");
	scanf("%d" ,&B);
	
	C=A;
	A=B;
	B=C;
	
	printf("\n After Swapping, value of A is %d" ,A);
	printf("\n After Swapping, value of B is %d" ,B);
	
	return 0;
}
