#include <stdio.h>
 
int main() {
   float radius, area ,radius2;
 
   printf("Enter the radius of circle : ");
   scanf("%f", &radius);
   printf("Enter the 2nd radius of circle : ");
   scanf("%f", &radius2);

 if (radius >= radius2)
  {printf("your first radius needs to be smaller than the 2nd radius.");} 
 while (radius <= radius2)
    {
   printf("radius is equal to %f", radius);
   area = 3.14 * radius * radius;
   printf("Area of circle : %f", area);
   radius++;
}
}
