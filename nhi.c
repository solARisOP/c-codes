#include <stdio.h>

int main ()
{
    int n;
    printf("enter num :\n");
    scanf("%d, &n");
    for(int a=n; a; a--)
    {
        printf("the value of a is %d\n", a);
    }
    return 0;
}