#include <stdio.h>

void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr!= '\0')
    {
        *ptr = *ptr +1;
        ptr ++;
    }
}
int main ()
{
    char c[] = "nitish" ;
    encrypt(c);
    printf("%s", c);
    return 0;
}