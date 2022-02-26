#include <stdio.h>

int main()
{
    int y;
    float z, x = 300000.00;
    printf("the amount you wish to withdraw :");
    scanf("%d", &y);
    if (y % 5 == 0 && x > y)
    {
        z = x - y - 0.5;
        printf("Your transaction is successfull\nremaining balance in your account : %.2f USD", z);
    }
    else
    {
        printf("your transaction is unsuccessfull remaining balance : %.2f USD", x);
    }
    return 0;
}