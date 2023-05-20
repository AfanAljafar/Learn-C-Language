#include <stdio.h>

int factorial(int num); //function declaration

int main()
{
    int x;
    printf("enter number for calculating factorial : ");
    scanf("%d", &x);

    printf("result of factorial %d is %d \n", x, factorial(x));

    return 0;
}

//function definition
int factorial(int num)
{
    if (num == 1)
    {
        return (1);
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
