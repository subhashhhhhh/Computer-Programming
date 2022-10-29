# include <stdio.h>
# include <math.h>

int kaprekar(n)
int n;
{
    if (n == 1)
    return 1;
    int sq = n * n;
    int ctr_digits = 0;
    while (sq)
    {
        ctr_digits++;
        sq /= 10;
    }
    sq = n*n;
    int i;
    for (i=1; i<ctr_digits; i++)
    {
        int eq_parts = pow(10, i);
        int sum = sq/eq_parts + sq % eq_parts;
        if (sum == n)
        return 1;
    }
    return 0;
}
int main()
{
int kpno;
printf("Subhash Gottumukkala (34022)\n");
printf("Input a number: ");
scanf("%d",&kpno);
if (kaprekar(kpno)==1)
{
		printf("%d is a Kaprekar number. \n",kpno);
		}
else
		{
		printf("%d is not a Kaprekar number. \n",kpno);
		}
}
