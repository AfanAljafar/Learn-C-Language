#include <stdio.h>

void *square(const void *num);

int main()
{
    int x, squareInt;

    printf("enter any integer : ");
    scanf("%d", &x);

    squareInt = square(&x);
    printf("result of square from input (%d^2): %d \n", x, squareInt);
    return 0;
}

void *square(const void *num)
{
    static int result;

    result = (*(int *)num) * (*(int *)num);

    return result;
}
