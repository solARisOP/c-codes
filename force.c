#include <stdio.h>

float force(float mass);

int main()
{
    float m, f;
    printf("Enter the value of mass in kgs :\n");
    scanf("%f", &m);
    printf("the force in newton is : %.2f\n", force(m));
    return 0;   
}
float force(float mass)
{
    float result = mass*9.8;
    return result;
}
