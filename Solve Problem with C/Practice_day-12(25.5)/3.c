#include<stdio.h>
#include<stdbool.h>

struct Date{
    int day;
    int month;
    int year;
};


int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


bool isValidDate(struct Date date){
    struct Date checkDate = date;

    if(((checkDate.year % 4 == 0) && (checkDate.year % 100 !=0)) || (checkDate.year % 400==0)){
        daysInMonths[1] = 29;
    }

    if(checkDate.day == daysInMonths[checkDate.month - 1] && checkDate.month <= 12 ){
        return true;
    }
    else return false;
}

struct Date inputDate(){
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
};

int main()
{
    struct Date date = inputDate();

    if(isValidDate(date)) printf("true");
    else printf("false");

    return 0;
}
