#include <stdio.h>

int main ()
{
    int p, c, m;
    float t ;
    printf("physics marks :\n");
    scanf("%d", &p);
    printf("chemistry marks :\n");
    scanf("%d", &c);
    printf("maths marks :\n");
    scanf("%d", &m);
    t = (p+c+m)/3;
    if (t<40 || p<33 || c<33 || m<33)
    {
        printf("your percentage is %f and you are failed", t);
    }
    else
    {
        printf("your percentage is %f and you are passed", t);
    }
    return 0;
}