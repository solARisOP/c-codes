#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date; 

void display(date d){
    printf("date is %d/%d/%d \n", d.day, d.month, d.year);
}
int datecmp(date d1, date d2){
    // make comparision in terms of year.
    if(d1.year > d2.year){
    return 1;
    }
    if(d1.year < d2.year){
    return -1;
    }
    // make comparision in terms of month.
    if(d1.month > d2.month){
    return 1;
    }
    if(d1.month < d2.month){
    return -1;
    }
    // make comparision in terms of day.
    if(d1.day > d2.day){
    return 1;
    }
    if(d1.day < d2.day){
    return -1;
    }
    return 0;  
}

int main(){

    date d1 = {9, 2, 2001};
    date d2 = {7, 2, 2009};

    display(d1);
    display(d2);

    int x = datecmp(d1,d2);
    printf("date comparision function returns %d", x);

return 0;
}