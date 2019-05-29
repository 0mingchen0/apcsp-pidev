#include "student.h"

#include <stdio.h>
#include <string.h>

void printStudent(struct Student* student)
{
printf("student: \n");
printf(" firstname:%s\n", student->firstname);
printf(" lastname:%s\n", student->lastname);
printf(" age:%d\n", student->age);
printf(" id:%d\n", student->id);
}
