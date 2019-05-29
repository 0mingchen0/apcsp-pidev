#include <stdio.h>
#include <string.h>
#include "student.h"


int main()
{
  struct Student student;
  strcpy(student.firstname, "First");
  strcpy(student.lastname, "Last");
  student.age = 15;
  student.id = 1234567;

  printStudent(&student);
}

