

#include <stdio.h>
#include <string.h>
struct Student {
char firstname[50];
char lastname[50];
int age;
int id;
};

void printStudent();
int main()
{
struct Student student;

strcpy(student.firstname, "First");
strcpy(student.lastname, "Last");
student.age = 15;
student.id = 1234567;
printStudent();
}

void printStudent(struct Student* student)
{
printf("student: \n");
printf(" firstname:%s\n", student->firstname);
printf(" age:%d\n", student->age);
printf(" lastname:%s\n", student->lastname);
printf(" id:%d\n", student->id);
}
