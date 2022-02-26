#include <stdio.h>

int fibo(int n)
{   
    int x1 = 0, x2= 1;
    int xn = x1 + x2;
    
}   

int main ()
{
    int n; 
    printf("Enter the nth element to know the value");
    scanf("%d", &n);
    printf("the value of the %dth element is %d", n, fibo(n));
    return 0;
}

