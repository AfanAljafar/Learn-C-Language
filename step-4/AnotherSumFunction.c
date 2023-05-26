#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int x, y;
    printf("enter your first numbers: ");
    scanf("%d", &x);
    printf("enter your second numbers: ");
    scanf("%d", &y);
    printf("sum result : %d \n", sum(x, y));
}
