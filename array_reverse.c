#include <stdio.h>

void reversearray(int *arr, int n)
{
    for(int i=0; i<(n/2); i++)
    {
    int temp = arr[i];
    arr [i] = arr[n-i-1];
    arr[n-i-1] = temp;
    }
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    reversearray(arr, 7);
    for(int i=0; i<7; i++)
    {
    printf("The value of element %d is %d\n", i, arr[i]);
    }
    return 0;
}