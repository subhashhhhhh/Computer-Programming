#include<stdio.h>
int main()
{
    int number,count=1;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    while(count<=10){
        int product=number*count;
        printf("%d*%d=%d\n", number,count,product);
        count=count+1;
    }
    return 0;
}
