#include <stdio.h>

int main()
{
    int x;

    printf("enter number : ");
    scanf("%d", &x);

    (x % 2 == 0) ? (printf("even number \n")) : (printf("odd number \n"));

    return 0;
}
