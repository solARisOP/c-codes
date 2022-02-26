#include <stdio.h>

int main ()
{
    int a=0, n, sum=0;
    printf("enter num. :\n");
    scanf("%d", & n);

    while(a<=n)
    {
        sum +=(a*8);
        a++;
    }
    printf("the sum of (8*1-8*%d) is : %d", n, sum);
    return 0;
}