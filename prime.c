#include <stdio.h>

int main()
{
    int a, y, n;
    printf("Enter the number \n");
    scanf("%d", &a);
    for (n = (a - 1); n > 1; n--)
    {
        y = a % n;
        if(y == 0)
        {
            break;
        }
    }
    if (y == 0)
    {
        printf("not a prime number");
    }
    else
    {
        printf("prime number");
    }
    return 0;
}