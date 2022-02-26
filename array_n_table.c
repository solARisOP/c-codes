#include <stdio.h>

int main()
{
    int arr[10], n;
    printf("Enter the number");
    scanf("%d", &n);
    for(int i=0; i<10; i++)
    {
        arr[i] =  n*(i+1);
        printf("%d X %d = %d\n", n, i+1, arr[i]);
    }
    return 0;
}