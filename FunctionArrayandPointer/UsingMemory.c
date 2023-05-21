#include <stdio.h>

void test(int k);

int main()
{
    int i = 0;

    printf("the address of the i is %x \n", &i);
    test(i);
    printf("the address of the i is %x \n", &i);
    test(i);
}

void test(int k)
{
    printf("the address of the k is %x \n", &k);
}
