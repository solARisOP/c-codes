#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char comp)
{
    //  for match draw
    if (comp == you)
    {
        return 0;
    }
    // for win or loose
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char ch;
    char you, comp;
    srand(time(0));
    int num = rand() % 100 + 1;
    if (num < 33)
    {
        comp = 's';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    do
    {
        printf("choose s, g and w for snake, gun and water\n");
        scanf(" %c", &you);
        int c = snakewatergun(you, comp);
        if (c == 0)
        {
            printf("match draw\n");
        }
        else if (c == 1)
        {
            printf("you won the match\n");
        }
        else
        {
            printf("you lost the match\n");
        }
        printf("computer chose %c and you chose %c, wanna continue ?\n", comp, you);
        scanf(" %c", &ch);
    }while(ch == 'y');
    return 0;
}