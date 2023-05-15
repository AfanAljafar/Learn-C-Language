#include <stdio.h>

int main()
{
    int profit, client, bonus;

    printf("enter the number of client : ");
    scanf("%d", &client);
    printf("enter total profits : ");
    scanf("%d", &profit);

    if (profit > 1000)
    {
        if (client > 15)
        {
            bonus = 100;
            printf("bonus $%d \n", bonus);
        }
        else
        {
            bonus = 25;
            printf("bonus $%d \n", bonus);
        }
    }
    else
    {
        printf("the profit didn't hit the target,\nyou don't get the bonus \n");
    }

    return 0;
}
