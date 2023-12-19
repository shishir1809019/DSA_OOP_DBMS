#include<stdio.h>

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Student highest = {.marks = 0};
    struct Student lowest = {.marks = 100};

    for(int i = 0; i<n; i++){
        struct Student a;
        scanf("%s %d %d %c %d", &a.name, &a.marks, &a.roll, &a.section, &a.whichClass);
        if(a.marks > highest.marks){
            highest = a;
        }
        if(a.marks < lowest.marks){
            lowest = a;
        }
    }

    printf("Highest -> %s %d %d %c %d\n", highest.name, highest.marks, highest.roll, highest.section, highest.whichClass);
    printf("Lowest  -> %s %d %d %c %d\n", lowest.name, lowest.marks, lowest.roll, lowest.section, lowest.whichClass);

    return 0;
}
