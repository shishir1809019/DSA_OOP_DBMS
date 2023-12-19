#include<stdio.h>
#include<stdbool.h>

struct Date {
	int day;
	int month;
	int year;
};

struct Student{
	int day;
	int month;
	int year;
};

bool isBirthday(struct Date date, struct Student student){
    if(date.year <= student.year && date.month == student.month && date.day == student.day){
        return true;
    }
    else return false;
}

struct Date DaInputDate(){
    struct Date date;
    printf("Enter the Date: ");
    scanf("%d %d %d", &date.day, &date.month, &date.month);
    return date;
};

struct Student StInputDate(){
    struct Student date;
    printf("Enter the student Birthday: ");
    scanf("%d %d %d", &date.day, &date.month, &date.month);
    return date;
};


int main()
{
    struct Date date1 = DaInputDate();
    struct Student date2 = StInputDate();

    if(isBirthday(date1, date2)) printf("true");
    else printf("false");

    return 0;
}
