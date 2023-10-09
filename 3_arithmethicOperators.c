#include <stdio.h>


//global variable declared
int num1, num2, res;

int main ()
{

    num1 = 2;
    num2 = 3;

    res = num1 + num2;

    //addition operation with user input
    printf("%d \n===========================\n", res);

    printf("addition operation :\n===========================\n");
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    res = num1 + num2;
    printf("result : %d", res);

    printf("\n\n===========================\n");

    //reduction operation with user input
    printf("reduction operation :\n===========================\n");
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    res = num1 - num2;
    printf("result : %d", res);

    printf("\n\n===========================\n");

    //multiplication operation with user input
    printf("multiplication operation :\n===========================\n");
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    res = num1 * num2;
    printf("result : %d", res);

    printf("\n\n===========================\n");

    //division operation with user input
    printf("division operation :\n===========================\n");
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    res = num1 / num2;
    printf("result : %d", res);

    printf("\n\n===========================\n");

    //modulus operation with user input
    printf("modulus operation :\n===========================\n");
    printf("enter first number : ");
    scanf("%d", &num1);
    printf("enter second number : ");
    scanf("%d", &num2);
    res = num1 % num2;
    printf("result : %d", res);

    return 0;
}
