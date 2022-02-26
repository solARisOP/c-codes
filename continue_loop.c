#include <stdio.h>
int main()
{
    int a=0, skip=3;
    while(a<6)
    {
        a++;
        if(a!=skip)
        {
            continue;
        }
        else
        {
            printf("%d", a);
        }
         
    }
}