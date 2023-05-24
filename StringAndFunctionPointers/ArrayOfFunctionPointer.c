#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main()
{
    int x, y, choice, result;
    int (*op[4])(int, int);

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;

    printf("enter first integer : ");
    scanf("%d", &x);
    printf("enter second integer : ");
    scanf("%d", &y);

    system("clear");

    printf("this menu for operation :\n");
    printf("(0)for add (+)\n(1)for subtract (-) \n(2)for multiply (x) \n(3)for divide (/) \n\n");
    printf("choose one from the menu above : ");
    scanf("%d", &choice);

    result = op[choice](x, y);
    printf("%d \n", result);

    return 0;
}

int add(int x, int y)
{
    system("clear");
    printf("selected add operation\n");
    printf("the result from %d + %d = ", x, y);
    return (x + y);
}

int subtract(int x, int y)
{
    system("clear");
    printf("selected subtract operation\n");
    printf("the result from %d - %d = ", x, y);
    return (x - y);
}

int multiply(int x, int y)
{
    system("clear");
    printf("selected multiply operation\n");
    printf("the result from %d * %d = ", x, y);
    return (x * y);
}

int divide(int x, int y)
{
    system("clear");
    printf("selected divide operation\n");
    if (y != 0)
    {
        printf("the result from %d / %d = ", x, y);
        return (x / y);
    }
    else
    {
        printf("the result from %d / %d is undefined - ", x, y);
        return 0;
    }
}
