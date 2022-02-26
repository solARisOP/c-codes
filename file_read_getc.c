#include <stdio.h>
 
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("getc_demo.txt", "r");
    c = fgetc(ptr);
    while(c != EOF) // EOF is end of file.
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}