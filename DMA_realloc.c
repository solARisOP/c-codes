#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) malloc(6* sizeof(int));
    for(int i=0; i<6; i++)
    {
        printf("enter the value of %d\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<6; i++)
    {
        printf("the value of %d is %d\n", i+1, ptr[i]);
    }

    ptr = realloc(ptr, 10* sizeof(int));
    for(int i=0; i<10; i++)
    {
        printf("enter the value of %d\n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("the value of %d is %d\n", i+1, ptr[i]);
    }

    return 0;
}
// realloc is used for reasigning memory it can me greater or lesser than the present one.  