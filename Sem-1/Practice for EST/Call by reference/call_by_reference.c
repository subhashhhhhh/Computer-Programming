#include<stdio.h>
void fun(int *num);
int main(){
int number;
number=56;
fun(&number);
printf("Number is %d", number);
return 0;
}
void fun(int *num){
*num=28;
}
