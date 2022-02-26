#include <stdio.h>

int main()
{
    int n;
    printf("enter the no. of the table ");
    scanf("%d", &n);
    for (int a = 0; a < 10; a++)
    {
        printf("%d X %d = %d\n", n, a + 1, n * (a + 1));
    }
    return 0;
}