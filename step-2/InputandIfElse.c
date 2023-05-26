#include <stdio.h>

int num;

int main()
{
    printf("Input your number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("your number is even number");
    else
        printf("your number is odd number");
}
