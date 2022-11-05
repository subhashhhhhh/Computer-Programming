 #include<stdio.h>
 #include<stdlib.h>
int main()
{
char *s="3.145";
float b;
int a;
long int c;
char d;
b=atof(s);
a=atoi(s);
c=atol(s);
printf("atof()=%f\n",b);
printf("atoi()=%d\n",a);
printf("atol()=%ld",c);
 }
