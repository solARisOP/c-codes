#include <stdio.h>

int main ()
{
    int a=0, n, sum=0;
    printf("enter num. :\n");
    scanf("%d", &n);

    do
    {
        sum +=a;
        a++;
    }while(a<=n);
    printf("the sum of first %d num is : %d\n", n, sum);
    return 0;
}