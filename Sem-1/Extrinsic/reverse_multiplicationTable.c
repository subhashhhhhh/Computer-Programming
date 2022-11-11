#include<stdio.h>
int main()
{
    int number,count=11;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    while(count<=10,count>0,count--){
        int product=number*count;
        printf("%d*%d=%d\n", number,count,product);
    }
    return 0;
}
