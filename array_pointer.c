#include <stdio.h>

int main ()
{
    int marks[4];
    int *ptr;
    // ptr=&marks[0];
    // ptr=marks; both lines are same.
    ptr = marks;

    for(int i=0; i<4; i++)
    {
        printf("enter the marks of student %d : \n", i+1);
        scanf("%d", ptr);
        ptr++;
    }
      for(int i=0; i<4; i++)
    {
        printf("enter the marks of student %d :%d \n", i+1, marks[i]);
    }
}