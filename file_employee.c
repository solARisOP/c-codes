#include <stdio.h>
typedef struct employee{
    char name[20];
    int salary;
}emp;
int main()
{
    FILE *ptr;
    ptr = fopen("detail.txt", "w");
    emp a = {"sahil", 34000};
    emp b = {"nitish", 40000};
    fprintf(ptr, "the name of the employee is %s\n", b.name);
    fprintf(ptr, "salary is %d\n", b.salary);
    fprintf(ptr, "the name of the employee is %s\n", a.name);
    fprintf(ptr, "salary is %d\n", a.salary);
    return 0;
}