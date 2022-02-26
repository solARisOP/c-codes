#include <stdio.h>

int main ()
{
    int n, fac=1,i=1;
    printf("enter num. :\n");
    scanf("%d", &n);

    while(i!=n+1);
    {
        fac *=i;
        i++;
    }
    printf("the factorial of %d is : %d", n, fac);
    return 0;
}