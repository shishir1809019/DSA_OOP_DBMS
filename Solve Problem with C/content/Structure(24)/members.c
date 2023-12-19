#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    char*name[100];
    int class;
    int roll;
    struct Date dob;
};

void printDate(struct Date date){
    printf("%d-%d-%d\n", date.day, date.month,date.year);
}
struct Date inputDate(){
    struct Date date;
    scanf("%d %d %d", &date.day,&date.month,&date.year);
    return date;
}

void printStudent(struct Student st){
    printf("Name: %s\n",st.name);
    printf("Class: %d\n", st.class);
    printf("Class: %d\n", st.roll);
    printf("DOB: ");
    printDate(st.dob);
}

struct Student inputStudent(){
    struct Student st;

    printf("Name: ");
    gets(st.name);
    gets(st.name);

    printf("Class:");
    scanf("%d", &st.class);

    printf("Roll:");
    scanf("%d", &st.roll);

    printf("DOB: ");
    st.dob = inputDate();

    return st;
};



int main()
{

    int n;
    printf("Number of students in class: ");
    scanf("%d",&n);

    struct Student students[n];

    for(int i = 1; i<=n; i++){
        printf("Input Students %d Input\n",i);
        students[i] = inputStudent();
    }

    for(int i = 1; i<=n; i++){
        printf("Student %d info \n", i);
        printStudent(students[i]);
    }

//    struct Student st1 = {
//        .class = 10,
//        .roll = 9,
//        .dob = {1, 1, 2000}
//        };
//    char name[] = "Structure in C programming";
//    strcpy(st1.name,name);
//    printStudent(st1);

    return 0;
}
