#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("generate.txt", "w");
    int n = 99;
    fprintf(ptr, "i'm loving it\n", n);
    fprintf(ptr, "its finger licking good\n", n);
    fclose(ptr);
    return 0;
}