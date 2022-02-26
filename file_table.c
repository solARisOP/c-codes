#include <stdio.h>
 
int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("filetable.txt", "w");
    printf("enter the integer");
    scanf("%d", &n);
    for(int i=0; i<10; i++)
    {
        fprintf(ptr, "%d X %d = %d \n", n, i+1, n*(i+1));
    }
    fclose(ptr);
    return 0;
}