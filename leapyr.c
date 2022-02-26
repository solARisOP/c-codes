#include <stdio.h>

int main ()
{
    int yr ;
    printf("Enter the year :\n");
    scanf("%d", &yr);

    if(yr%4==0)
    {
        if(yr%100==0)
        {
            printf("its a leap year");
        }
    }
    else
    {
        printf("%d is not a leap year", yr);
    }
    return 0; 
}