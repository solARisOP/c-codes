#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int guess, nguess=1, num;
    srand(time(0));
    num=rand()%100 + 1;
    //printf("the number is %d /n", num);
    do
    {
        printf("guess the num btw 1 to 100 : \n");
        scanf("%d", &guess);
        if(guess<num)
        {
            printf("higher num plz : \n");
        }
        else if(guess>num)
        {
            printf("lower num plz : \n");
        }
        else
        {
            printf("you guessed it in %d attempts \n", nguess);
        }
        nguess++;
    } while (guess!=num);
    return 0;
}