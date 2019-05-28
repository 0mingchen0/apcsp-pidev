#include <stdio.h>
#define PI 3.14


int main()
{
    for (int i = 3; i < 12.5; i++)
    {
    printf("radius is equal to %d\n", i);
  float area;
  area = PI*i*i;
  printf("Area of circle is %.2f\n", area);
}
return 0;
}
