#include <stdio.h>

int fac(int x);

int main()
{
    int a = 5;
    printf("the value of factorial %d is = %d\n", a, fac(a));
    return 0;
}

int fac(int x)
{
    if(x==1 || x==0)
    return 1;
    else
    {
        return x *fac(x-1);
    }
    
}