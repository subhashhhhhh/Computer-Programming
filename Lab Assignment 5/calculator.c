#include<stdio.h>
int main ()
{
	int num,digit;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	//reversing
	int revnum = 0;
	while(num)
	{
		revnum = revnum * 10 + num % 10;
		num /= 10;
	}
	while (revnum)
	{
		digit = revnum % 10;
		revnum /= 10;
		switch(digit)
		{
			case 1 : printf("One ");
			         break;
			case 2 : printf("Two ");
			         break;  
			case 3 : printf("Three ");
			         break;
			case 4 : printf("Four ");
			         break;  
			case 5 : printf("Five ");
			         break;	
	    	case 6 : printf("Six ");
			         break;
			case 7 : printf("Seven ");
			         break; 
			case 8 : printf("Eight ");
			         break;
			case 9 : printf("Nine ");
			         break;
			case 0 : printf("Zero ");
			         break;
		}
	}
	
	printf("\n");
}
