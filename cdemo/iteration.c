#include <stdio.h>
int main()
{
        int i;
        int div = 2;
        printf(" numbers that are divisible by div ");
        for (i=1; i<=100; i++)
        {
               if (i%div==0)
                  printf(" %d", i);
        }
} 
