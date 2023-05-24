#include <stdio.h>

void sayHello(int times); /* function */

int main()
{
    void (*funptr)(int); /* function pointer */
    funptr = sayHello;   /* pointer assignment */
    funptr(3);           /* function call */
}

void sayHello(int times)
{
    int i;
    for (i = 0; i < times; i++)
    {
        printf("Hello!!! \n");
    }
}
