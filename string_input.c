#include <stdio.h>

int main ()
{
    char s[34] ;
    printf("Enter your name :  ");
    scanf("%s", s);
    // wrote "s" and not "&s" cause at itself is a array it stores values inside it.
    // and scanf automatically adds a null character when pressed enter,
    //  but it should be within the limits  of how much char array you have declared like in this s[34].
    // and space between characters does not work in scanf %s.
    printf("Your name is %s", s);
    return 0;
}