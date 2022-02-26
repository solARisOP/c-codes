#include <stdio.h>

void printtable(int *arr, int num, int n);

int main ()
{
    int x, m=0, n;
    int arr[m][n];
    printf("Enter the no. of tables you want : ");
    scanf("%d", &m);
    if(m>0)
    {
        printf("levels you want");
        scanf("%d", &n);
        for(int i=0; i<m; i++)
        {
        printf("Enter the number");
        scanf("%d", x);
        printtable(arr[m], x, n);
        }
    }
    else
    {
        printf("wrong input");
    }
    
    return 0;
}
void printtable(int *arr, int num, int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i] = num*(i+1);
        printf("%d X %d = %d\n", num, i+1, arr[i]);
    }
}    