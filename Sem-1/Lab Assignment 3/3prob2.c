#include <stdio.h>
#include <math.h>

int main()
{
     int a,b,c,discriminant;
        float root1,root2,realPart,imaginaryPart;
        printf("Enter coefficients a, b and c: ");
        scanf("%d %d %d",&a,&b,&c);
        discriminant=b*b-4*a*c;
        if (discriminant>0)
        {
            root1=(-b+sqrt(discriminant))/(2*a);
            root2=(-b-sqrt(discriminant))/(2*a);
            printf("root1 = %.2f and root2 = %.2f",root1 , root2);
        }
        else if (discriminant==0)
        {
            root1=root2=-b/(2*a);
            printf("root1 = root2 = %.2f;",root1);
        }
        else
        {
            realPart = -b/(2*a);
            imaginaryPart=sqrt(-discriminant)/(2*a);
            printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi",realPart, imaginaryPart, realPart, imaginaryPart);
        }
}