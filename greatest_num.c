#include <stdio.h>

int main ()
{
    int a, b, c, d ;
    printf("Enter 1st number :\n");
    scanf("%d", &a);
    printf("Enter 2nd number :\n");
    scanf("%d", &b);
    printf("Enter 3rd number :\n");
    scanf("%d", &c);
    printf("Enter 4th number :\n");
    scanf("%d", &d);
    if(a>b && a>c && a>d)
    {    
        printf("%d is the greatest number", a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is the greatest number", b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%d is the greatest number", c);  
    }
    else if(d>a && d>b && d>c)
    {
        printf("%d is the greatest number", d);
    } 
    return 0; 
}