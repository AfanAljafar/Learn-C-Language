#include <stdio.h>

int main()
{
    float purchases[3];
    float total = 0;
    int k;

    //input value of element array
    for (k = 0; k < 3; k++)
    {
        int x = 1;
        printf("enter the price of the itenm %d : ", x);
        scanf("%f", &purchases[k]);
        x++;
    }

    /* total the purchases */
    for (k = 0; k < 3; k++)
    {
        total += purchases[k];
    }

    printf("Purchases total is %6.2f\n", total);
    /* Output:  Purchases total is 115.74 */

    return 0;
}
