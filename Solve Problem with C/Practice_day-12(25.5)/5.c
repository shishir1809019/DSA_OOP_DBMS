#include<stdio.h>

struct Point1{
    int x;
    int y;
};
struct Point2{
    int x;
    int y;
};

struct Point1 inputPoint1(){
    struct Point1 point1;
    printf("x1: ");
    scanf("%d", &point1.x);
    printf("y1: ");
    scanf("%d", &point1.y);
    return point1;
};
struct Point2 inputPoint2(){
    struct Point2 point2;
    printf("x2: ");
    scanf("%d", &point2.x);
    printf("y2: ");
    scanf("%d", &point2.y);
    return point2;
};

void midPoint(struct Point1 point1, struct Point2 point2){
    printf("x = %d y = %d",(point1.x + point2.x)/2 ,(point1.y + point2.y)/2);
}

int main()
{
    struct Point1 point1 = inputPoint1();
    struct Point2 point2 = inputPoint2();

    midPoint(point1, point2);

    return 0;
}
