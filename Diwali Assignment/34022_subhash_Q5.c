#include<stdio.h>
int main ()
{
    printf("Subhash Gottumukkala (34022)\n");

    int a;
    printf("Age: ");
    scanf("%d", &a);

    if ((a>0)&&(a<=3)){
        printf("\nTODDLER");
        printf("\nALLOWED");
    }

    else if ((a>=4)&&(a<=12)){
        printf("\nJUNIOR");
        printf("\nALLOWED");
    }

    else if ((a>=13)&&(a<18)){
    printf("\nTEENAGER");
    printf("\nALLOWED");
    }

    else if ((a>=18)&&(a<=100)){
        printf("\nNOT ALLOWED");
    }

    else if (a>100){
        printf("\nEnter a valid age");
    }
}
