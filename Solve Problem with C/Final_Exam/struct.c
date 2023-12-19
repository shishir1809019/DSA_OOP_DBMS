#include<stdio.h>

struct Student{
    int roll;
    int class;
    int marks;

};

int main()
{
    int n;
    scanf("%d", &n);

    struct Student students[n];

    int sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d %d %d", &students[i].roll, &students[i].class, &students[i].marks);
        sum+=students[i].marks;
    }
    printf("Sum of all students marks: %d", sum);
    return 0;
}
