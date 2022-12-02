#include<stdio.h>
int main()
{
	int i,n,large,small,total;
	printf("Enter total no.of numbers: ");
	scanf("%d", &total);
	printf("\nEnter the first number: ");
	scanf("%d", &n);
	large=n;
	small=n;
	for(i=1;i<=total-1;i++){
		printf("Enter another number: ");
		scanf("%d", &n);
		if(n>large)
		large=n;
		else if(n<small)
		small=n;
	}
	printf("\nThe largest number is %d",large);
	printf("\nThe smallest number is %d",small);
	printf("\nrange is %d",large-small);
}
