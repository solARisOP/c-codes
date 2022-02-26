#include <stdio.h>

int main()
{
    int num, rem, sum = 0;
    printf("Enter the number, cointaining a minimum of two digits ");
    scanf("%d", &num);
    while(num)
    {
        rem = num%10;
        num = num/10;
        sum += rem;
    }
    printf("the sum of the digits of the number is %d", sum);
    return 0;
}