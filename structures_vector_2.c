#include <stdio.h>

typedef struct vector {
    int x, y;
}vec;

vec sumvector(vec v1, vec v2){
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result; 
}
int main (){
    vec v1, v2, sum;

    v1.x = 2;
    v1.y = 5;

    v2.x = 7;
    v2.y = 6;

    sum = sumvector(v1,v2);
    printf("dimensions of result x and result y is %d and %d",sum.x, sum.y );

    return 0;
}