#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("nitish.txt", "r");
    if (ptr == NULL)
    {
        printf("file does not exist");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("the value of this is %d\n", num);
        printf("the value of this is %d\n", num2);
    }
    return 0;
}