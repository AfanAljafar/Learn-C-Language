#include <stdio.h>

int sum(int x, int y);

int main()
{
    int x, y, result;

    printf("enter value of x : ");
    scanf("%d", &x);
    printf("enter value of y : ");
    scanf("%d", &y);

    result = sum(x, y);
    printf("Result of sum x value & y value : %d \n", result);
}

int sum(int x, int y)
{
    x += y;
    return (x);
}
