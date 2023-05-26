#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main()
{
    int arr[5] = {7, 2, 8, 6, 3};
    int num, width, i;

    num = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    printf("%d\n", num);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

int compare(const void *element1, const void *element2)
{
    if ((*(int *)element1) == (*(int *)element2))
        return 0;
    else if ((*(int *)element1) < (*(int *)element2))
        return -1;
    else
        return 1;
}
