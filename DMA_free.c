#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int*) malloc(600* sizeof(int));
    for(int i=0; i<600; i++)
    {
        ptr2 = (int*) malloc(6000* sizeof(int));
        printf("enter the value of %d\n", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2); // for freeing memory instantly.
    }
    for(int i=0; i<600; i++)
    {
        printf("the value of %d is %d\n", i+1, ptr[i]);
    }

    return 0;
}