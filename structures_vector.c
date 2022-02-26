#include <stdio.h>

typedef struct vector {
    int x, y;
}vec;

int main (){
    vec v1, v2;
    
    v1.x = 54;
    v1.y = 50;
   
    printf("dimensions x and y is %d and %d \n", v1.x, v1.y);

    v2.x = 67;
    v2.y = 60; 

    printf("dimensions x and y is %d and %d",v2.x, v2.y );

    return 0;
}