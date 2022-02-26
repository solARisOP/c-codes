#include <stdio.h>

void msg1();
void msg2();
void msg3();

int main()
{
    printf("welcome\n");
    msg1();
    printf("bye\n");
    return 0;
}

void msg1()
{
    printf("good morning\n");
    msg2();
}
void msg2()
{
    printf("good afternoon\n");
    msg3();
}
void msg3()
{
    printf("good might\n");
}