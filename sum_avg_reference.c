#include <stdio.h>

void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a+b;
    *avg = (float)(*sum)/2;
}

int main()
{
    int i, j, sum;
    float avg;
    i=3;
    j=9;
    SumAndAvg(i, j, &sum, &avg);
    printf("sum of i and j is %d\n", sum);
    printf("avg of i and j is %f\n", avg);
    return 0;
}