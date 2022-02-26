#include <stdio.h>

int main ()
{
    char s[34] ;
    printf("Enter your name :  ");
    gets(s);
    // gets used for multiwords input.
    puts(s);
    // it places your cursor on the next line.
    // printf("Your name is %s", s);
    return 0;
}
