#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a != b)
  { 
    printf("a is not equal to b");
  }
  else
  {
    printf("a is euqal to b");
  }
  if (a >= b)
  { 
    printf("a is larger than b");
  }
  else
  {
    printf("a is smaller than b");
  }
  if  (a == 0 || b == 0)
  { 
    printf("a or b is 0");
  }
  else
  {
    printf("both a and b is not 0");
  }
}

