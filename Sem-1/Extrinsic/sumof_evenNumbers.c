#include<stdio.h>
int main()
{
int num,sum=0;
printf("Enter a number: ");
scanf("%d",&num);
for(int i=2;i<=num;i=i+2){
    sum=sum+i;
}
printf("\nSum of First %d Even Numbers is %d", num,sum);
return 0;
}
