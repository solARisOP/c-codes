#include <stdio.h>

int main ()
{
    // char ptr []= "NITISH" ; (this is also correct.), but it cannot be further initialized cause its an array
    //  and the other one is not an array and can further be initialise into one.
    char *ptr = "NITISH" ;
    printf("%s", ptr);

    // %s is a format specifier like %d, %f, %c, %u .
    return 0;
}