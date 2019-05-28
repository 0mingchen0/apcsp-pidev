#include <stdio.h>

int main()
{

  int a;
  int d;
  int e;
  int* ptrtoa;
int* ptrtod;
int* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;

  a = 5;
 d = 1;
e = 2;
  printf("The value of a is %d\n", a);
printf("The value of d is %d\n", d);
printf("The value of e is %d\n", e);
  *ptrtoa = 6;
 *ptrtod = 4;
  *ptrtoe = 2;
 printf("The value of a is %d\n", a);
printf("The value of d is %d\n", d);
printf("The value of e is %d\n", e);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %d\n", *ptrtod);
  printf("The address of d is %d\n", &d);
printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %d\n", *ptrtoe);
  printf("The address of e is %d\n", &e);
}



