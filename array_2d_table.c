#include <stdio.h>

void printtable(int *arr, int num, int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i] = num*(i+1);
        printf("%d X %d = %d\n", num, i+1, arr[i]);
    }
}
int main()
{
    int arr[3][10];
    printtable(arr[0], 2, 10);
    printtable(arr[1], 7, 10);
    printtable(arr[2], 9, 10);
    return 0;
}