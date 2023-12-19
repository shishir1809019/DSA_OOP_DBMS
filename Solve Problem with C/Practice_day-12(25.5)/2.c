#include<stdio.h>

struct Date {
	int day;
	int month;
	int year;
};

struct Student{
	char* name[100];
	int class;
	int roll;
	struct Date dob;
};

void printDate(struct Date date){
    printf("DOB: %d %d %d", date.day, date.month, date.year);
};

void printStudent(struct Student student){
    printf("Name: %s\n", student.name);
    printf("Class: %d\n", student.class);
    printf("Roll: %d\n", student.roll);
    printDate(student.dob);
};

struct Date inputDate(){
    struct Date date;
    scanf("%d %d %d", &date.day, &date.month, &date.year);
    return date;
};

struct Student inputStudent(){
    struct Student student;

    printf("Name: ");
    gets(student.name);

    printf("Class: ");
    scanf("%d", &student.class);

    printf("Roll: ");
    scanf("%d", &student.roll);

    printf("Date of Birth: ");
    student.dob = inputDate();

    return student;
};

int main()
{


    struct Student students =  inputStudent();

    printStudent(students);
    return 0;
}
