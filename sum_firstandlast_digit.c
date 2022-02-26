#include <stdio.h>

int main()
{
    int num, last, sum;
    printf("enter the number of minimum two digits ");
    scanf("%d", num);
    last = num % 10;
    while (num > 9)
    {
        num = num/10;
    }
    int first = num;
    sum = first + last;
    printf("the sum of first and last integer is %d", sum);
    return 0;
}