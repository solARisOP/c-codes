#include <stdio.h>

int main ()
{
    int i = 4;
    scanf("%d", &i);
    int* j = &i;
    printf("value    of   i   %d\n", i);
    printf("value    of   i   %d\n", *j );
    printf("value    of   j   %d\n", *&j);
    printf("address  of   i   %u\n", j);
    printf("address  of   i   %u\n", &i);
    printf("address  of   j   %u\n", &j);
    return 0;
}