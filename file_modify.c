#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("modify.txt", "r");
    int n, z;
    fscanf(ptr,"%d", &n);
    z = 2*n;
    ptr = fopen("modify.txt", "w");
    fprintf(ptr, "the modified value is %d", z);
    fclose(ptr);
    return 0;
}