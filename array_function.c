#include <stdio.h>

// void printarray(int *ptr, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("the value of %d is %d\n", i+1, *(ptr+i));
//     }
// }
void printarray(int ptr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("the value of %d is %d\n", i+1, ptr[i]);
    }
    // ***ptr[2]=9856;***
}
int main ()
{
    int arr[]= {2,3,5,8,345,76,7787};
    printarray(arr, 7);
    // here 7 is no. of elements in the array.
    // ***printf("%d", arr[2]); the value will change cause we had passed the reference***
    return 0;
}