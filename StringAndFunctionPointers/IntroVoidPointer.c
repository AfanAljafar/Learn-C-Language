/*A void pointer is used to refer to any address type in memory and
has a declaration that looks like:
void *ptr;*/

#include <stdio.h>

int main()
{
    int x = 7;
    float y = 3.14;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d \n", *((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f \n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c \n", *((char *)ptr));

    return 0;
}
