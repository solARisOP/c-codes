#include <stdio.h>
int change(int a, int c)
{
    c = a*10;
    printf("the value of a after increment is %d\n", c);
}
int main()
{
    int i,j;
    printf("Enter the value of a:\n");
    scanf("%d", &i);
    change(i,j);
    printf("the value after change is %d\n", i);
    return 0;
}