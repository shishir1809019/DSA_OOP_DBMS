#include<stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

void printDate(struct Time time){
    printf("%d:%d:%d\n", time.hour, time.minute,time.second);
}

struct Time inputTime(){
    struct Time time;
    //scanf("%d %d %d", &time.hour,&time.minute,&time.second);
    time.hour = 18;
    time.minute = 30;
    time.second = 00;
    return time;
}

int main()
{
    struct Time time;

    time = inputTime();
    printDate(time);
    return 0;
}
