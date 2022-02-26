#include <stdio.h>

void slice(char *st, int m, int n)
{
    int i=0;
    while((m+i)<n)
    {
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}
int main ()
{
    char st[] = "nitish";
    slice(st, 1, 5);
    // the first value is st , second is for adding 1 , third is limit of the st you want to cut but it cuts upto 1 less than the last number.
    printf("%s", st);
    return 0;
} 