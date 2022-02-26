#include <stdio.h>
#include <string.h>

int main ()
{
    char *str = "This" ;
    char str2[50] ;
    strcpy(str2, str);
    // In strcpy(target,source), we are storing source in our target.
    printf("now str2 is %s ", str2);
    return 0;
}