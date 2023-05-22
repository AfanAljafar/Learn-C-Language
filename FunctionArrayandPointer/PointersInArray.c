/*Pointers are especially useful with arrays.
An array declaration reserves a block of contiguous memory addresses for its elements.
With pointers, we can point to the first element
and then use address arithmetic to traverse the array:

 + is used to move forward to a memory location

 - is used to move backward to a memory location */


#include <stdio.h>

int main()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;

    ptr = &a[3];
    printf("%d \n", *(ptr - 1));

    ptr = a;
    printf("%d \n", *a);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }
}
