#include<stdio.h>
int main()
{
	printf("Subhash Gottumukkala (34022\n");
int a,b,sumd=0,sump=0,r,c; 
printf("Enter a number");
scanf("%d",&a);
b=a;
while(a>0||sumd>9)
{
if(a==0)
{
a=sumd;
sumd=0;
}
r=a%10;
sumd=sumd+r;
a=a/10;
}
a=b;
c=2;
while(a>1)
{
while(a%c==0)
{
printf("%d\b",c);
sump=sump+c;
a=a/c;
}
c=c+1;
if(c>b/2)
break;
}

a=sump;
sump=0;
while(a>0||sump>9)
{
if(a==0)
{
a=sump;
sump=0;
}
r=a%10;
sump=sump+r;
a=a/10;
}
if(sumd==sump)
printf("\n %d is a Smith number",b);
else
printf("%d is not a Smith number",b);

return 0;
}
