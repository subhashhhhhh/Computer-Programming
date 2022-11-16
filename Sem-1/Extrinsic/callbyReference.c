#include<stdio.h>
int fun(int *ptr1,int *ptr2){
    *ptr1=10;
    *ptr2=20;
}
int main(){
    int x=20,y=10;
    fun(&x,&y);
    printf("%d %d", x,y);
}
