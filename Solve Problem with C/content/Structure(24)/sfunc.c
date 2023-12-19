#include<stdio.h>
#include<stdbool.h>

struct Date{
    int day;
    int month;
    int year;
};

bool isFirstDay(struct Date date){
    return date.day == 1 && date.month == 1;
}

struct Date getFirstDay(int year){
    struct Date ans = {1, 1, year};

    return ans;
};

void printDate(struct Date date){
    printf("%d-%d-%d", date.day, date.month,date.year);
}

int main()
{
    struct Date date = getFirstDay(2022);
    printDate(date);


//    if(isFirstDay(date)){
//        printf("Happy New Year");
//    }

    return 0;
}
