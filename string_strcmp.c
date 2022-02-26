#include <stdio.h>
#include <string.h>

int main ()
{
    char str [50] = "hello";
    char *str2 = "hellz" ;
    // if the difference between the ascii value of first missmatching characters is positive then it prints positive value other wise negative value.
    int val = strcmp(str, str2);
    // cause this function delivers an integer type.
    printf("%d", val);
    return 0;
}