#include <stdio.h>

int main()
{
    int r;
    printf("Rating (1-5):");
    scanf("%d", &r);
    switch(r)
    {
        case 1:
            printf("Your rating is 1\n");
            break;
        case 2:
            printf("Your rating is 2\n");
            break;
        case 3:
            printf("Your rating is 3\n");
            break;
        case 4:
            printf("Your rating is 4\n");
            break;
        case 5:
            printf("Your rating is 5\n");
            break;
        default:
            printf("Invalid rating\n");
            break;
    }        
    return 0;        
}
