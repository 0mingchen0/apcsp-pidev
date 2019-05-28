#include <stdio.h>
#include <string.h>

int main()
{
    int i;
char str1[] = "abcdefghiklmnopqrstuvwxyz";
char str2[] = "abcdefghiklmnopqrstuvwxyz";
if (strcmp(str1, str2) == 0)
printf("the strings are identical\n");
else
printf("the strings are different\n");
char str3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
if (strcmp(str1, str3) == 0)
printf("the strings are identical\n");
else
printf("the strings are different\n");
strcat(str1, str3);
printf("two strings: %s %s\n", str1, str3);
}

