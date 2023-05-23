#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "afan";
    char str2[] = " aljafar";

    printf("string 1 : %s \n", str1);
    printf("string 2 : %s \n", str2);

    strcat(str1, str2);
    printf("string merged : %s \n", str1);

    printf("length of string 1 is %d \n", strlen(str1));
    strcpy(str1, str2);
    printf("string 1 now %s \n", str1);

    return 0;
}
