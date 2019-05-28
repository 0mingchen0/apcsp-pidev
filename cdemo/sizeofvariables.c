#include <stdio.h>
int main()
{
    int inte;
    float flo;
    double dou;
    char cha;
    signed int a = 5;
    unsigned int i = 7;
    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of int: %ld bytes\n",sizeof(inte));
    printf("Size of float: %ld bytes\n",sizeof(flo));
    printf("Size of double: %ld bytes\n",sizeof(dou));
    printf("Size of char: %ld byte\n",sizeof(cha));
printf("Size of unsigned int: %ld byte\n",sizeof(i));
printf("Size of signed int: %ld byte\n",sizeof(a));
    return 0;

}
