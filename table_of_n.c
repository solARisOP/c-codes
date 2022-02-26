#include <stdio.h>

int main ()
{
    int a=0, n;
    printf("enter num. :\n");
    scanf("%d", &n);

    while(a<n)
    {
        printf("10 x %d = %d\n", a+1, (a+1)*10);
        a++;
    }
    return 0;
}