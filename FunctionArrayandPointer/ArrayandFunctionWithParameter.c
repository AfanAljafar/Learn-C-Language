#include <stdio.h>

int sum(int *a, int num_elements);

int main()
{
    int orders[5] = {100, 50, 20, 30, 200};

    printf("Total of order : %d \n", sum(orders, 5));
}

int sum(int *a, int num_elements)
{
    int total = 0;
    int i;

    for (i = 0; i < num_elements; i++)
    {
        total += a[i];
    }
    return (total);
}
