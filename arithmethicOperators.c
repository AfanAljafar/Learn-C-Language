#include <stdio.h>

int main ()
{
    int num1, num2, res;

    num1 = 2;
    num2 = 3;

    res = num1 + num2;

    printf("%d \n", res);

    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    res = num1 + num2;
    printf("result : %d", res);
    return 0;
}
