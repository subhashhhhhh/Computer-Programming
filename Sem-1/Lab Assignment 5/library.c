#include<stdio.h>
int main ()
{
	int days;
	printf("How many days late are you?: ");
	scanf("%d", &days);
	
	if(days<=5)
	printf("You're fined 50 paisa'");
	
	else if((days>5)&&(days<10))
	printf("You're fined one rupee");
	
	else if((days>10)&&(days<30))
	printf("You're fined 5 rupees");
	
	else if(days>30)
	printf("We're sorry to inforom you that your membership has been cancelled'");
}
