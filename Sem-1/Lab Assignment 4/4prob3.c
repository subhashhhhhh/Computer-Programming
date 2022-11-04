//atof()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10] = "3.14";
    float pi = atof(a);
    printf("Value of pi = %f\n", pi);
    return 0;
}
//atoi()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10] = "123";
    int b = atoi(a);
    printf("Value of b = %d\n", b);
    return 0;
}
//atol()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10] = "1234567890";
    long b = atol(a);
    printf("Value of b = %ld\n", b);
    return 0;
}
//itoa()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 123;
    char b[10];
    itoa(a, b, 10);
    printf("Value of b = %s\n", b);
    return 0;
}
//ltoa()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long a = 1234567890;
    char b[10];
    ltoa(a, b, 10);
    printf("Value of b = %s\n", b);
    return 0;
}