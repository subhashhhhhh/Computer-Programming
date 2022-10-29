#include<stdio.h>
void smith(int n)
{
    int a,b=0,c=0,d,e,f,g,h;
    a=n;
    while(a>0)
    {
        b=b+(a%10);
        a/=10;
    }
    a=n;
    while(a>1)
    {
        for(d=2;d<=a;d++)
        {
            if(a%d==0)
            break;
        }
        h=0;
        e=d;
        for(g=1;g<=d;g++)
        {
            if(d%g==0)
            h++;
        }
        if(h==2)
        {
            while(d>0)
            {
                c=c+(d%10);
                d=d/10;
            }
        }
        a=a/e;

    }
    if(b==c)
    printf("\nThe given number is a smith number");
    else
    printf("\nThe given number is not a smith number");
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    smith(n);
}