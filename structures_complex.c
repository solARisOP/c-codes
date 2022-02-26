#include <stdio.h>

typedef struct complexnumber{
    int real;
    int img;
}comp;

void display (comp c){
    printf("the value of real part is %d \n", c.real);
    printf("the value of img part is %d \n", c.img);
}
int main(){
    comp c[5];

    for(int i=0; i<5; i++){
        printf("enter the value of %d num real part \n", i+1);
        scanf("%d", &c[i].real);
        printf("enter the value of %d num img part \n", i+1);
        scanf("%d", &c[i].img);
    }

    for(int i=0; i<5; i++){
        display(c[i]);
    }

    return 0;
}