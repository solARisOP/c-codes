#include <stdio.h>
#include <string.h>
// its for using library function strlen(), which is fixed.
int main()
{
    char *str = "NITISH" ;
    int a = strlen(str);
    printf("the length of the above character is %d", a);
    return 0;
}