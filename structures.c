#include <stdio.h>
#include <string.h>
 struct employee{
    int code;
    float salary;
    char name[10];
 };

int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.678;
    // e1.name = "nitish"; wont work because of array type 
    strcpy(e1.name, "nitish");

    printf("%d", e1.code);

    return 0;
}