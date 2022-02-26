#include <stdio.h>

int main ()
{
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    if(age>90)
    {
        printf("you cannot drive");   
    }
    else
    {
        printf("you can drive");     
    }
    return 0;
}