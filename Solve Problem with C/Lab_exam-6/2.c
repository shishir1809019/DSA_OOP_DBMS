#include<stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
};

struct Interval{
    struct Time start;
    struct Time end;
};

struct Interval inputStartTime(){
    struct Interval time;

    time.start.hour = 5;
    time.start.minute = 30;
    time.start.second = 00;

    return time;
};
struct Interval inputEndTime(){
    struct Interval time;

    time.end.hour = 10;
    time.end.minute = 15;
    time.end.second = 00;

    return time;
};


int main()
{
    struct Interval time1;
    struct Interval time2;
    time1 = inputStartTime();
    time2 = inputEndTime();

   printf("Time start: %d:%d:%d\n", time1.start.hour, time1.start.minute,time1.start.second);
   printf("End start: %d:%d:%d\n", time2.end.hour, time2.end.minute,time2.end.second);


    return 0;
}
