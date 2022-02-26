#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr ;
    int n;
    printf("enter the no. of integers");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("enter the value of %d\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("the value of %d is %d\n", i+1, ptr[i]);
    }

    return 0;
}