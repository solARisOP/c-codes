#include <stdio.h>

int main()
{
    int age, vippass=0;
    printf("enter your age :");
    scanf("%d", &age);

    if (age <= 70 && age>=18 || vippass==1 )
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}