#include <stdio.h>
#include <string.h>

int main ()
{
    char st1[34];
    char st2[34];
    char c;
    int i =0;
    printf("Enter the value of first string : ");
    scanf("%s", st1);
    printf("Enter the value of second string character by character");

    while(c!= '\n')
    {
        fflush(stdin);
        // its used because char also takes enter as an input and to delete that we had to use this function.
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value of string 1 %s \n", st1);
    printf("The value of string 2 %s \n", st2);
    printf("strcmp value of st1 and st2 is %d", strcmp(st1, st2));
    return 0;
}