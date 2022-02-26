#include <stdio.h>
#include <string.h>

int main ()
{
    char str [50] = "hello";
    char *str2 = "nitish" ;
    strcat(str, str2);
    // it directly pastes str2 in str.
    printf("%s", str);
    return 0;
}