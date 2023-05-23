#include <stdio.h>

int *getArray();

int main()
{
    int *a;
    int k;

    a = getArray();
    for (k = 0; k < 5; k++)
    {
        printf("%d \n", a[k]);
    }
    return 0;
}

int *getArray()
{
    static int element[5];
    int k;
    int num = 0;

    for (k = 0; k < 5; k++)
    {
        element[k] = num += 10;
    }
    return (element);
}
