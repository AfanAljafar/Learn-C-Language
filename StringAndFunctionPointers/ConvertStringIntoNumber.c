#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[10];
    int y;

    printf("enter string as a number : ");
    gets(x);

    y = atoi(x);
    printf("you entered : %d \n", y);

    return 0;
}
