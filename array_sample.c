#include <stdio.h>

int main()
{
    int marks[4];
    printf("enter marks for student 1 : ");
    scanf("%d", &marks[0]);
    printf("enter marks for student 2 : ");
    scanf("%d", &marks[1]);
    printf("enter marks for student 3 : ");
    scanf("%d", &marks[2]);
    printf("enter marks for student 4 : ");
    scanf("%d", &marks[3]);
    printf("you entered %d, %d, %d and %d\n", marks[0],marks[1],marks[2],marks[3]);
    return 0;
}