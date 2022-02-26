#include <stdio.h>

int main()
{
    int i=5;
    int *ptr;
    ptr= &i;
    printf("the value of ptr is %u \n", ptr);
    ptr++;
    printf("the value of ptr is %u \n", ptr);
    // 4 increased because of integer size is 4 bytes in this system.
    return 0;
}