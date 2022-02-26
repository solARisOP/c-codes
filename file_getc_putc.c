#include <stdio.h>
 
int main()
{
    FILE *ptr;
    // // fgetc for reading a file
    // ptr = fopen("gets_demo.txt", "r");
    // // char c = fgetc(ptr);
    // printf("the value of my char is %c\n",fgetc(ptr) );
    // printf("the value of my char is %c\n",fgetc(ptr) );
    // printf("the value of my char is %c\n",fgetc(ptr) );
    // printf("the value of my char is %c\n",fgetc(ptr) );
    // printf("the value of my char is %c\n",fgetc(ptr) );
    // printf("the value of my char is %c\n",fgetc(ptr) );
    // printf("the value of my char is %c\n",fgetc(ptr) );

    ptr = fopen("putc_demo.txt", "w");
    putc('t',ptr);
    putc('t',ptr);
    putc('t',ptr);
    putc('t',ptr);
    putc('t',ptr);
    fclose(ptr);
    return 0;
}