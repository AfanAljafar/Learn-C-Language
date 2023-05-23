#include <stdio.h>

int main()
{
    char firstName[50];
    int age;

    printf("enter your first name : ");
    scanf("%s", firstName);
    printf("enter your age : ");
    scanf("%d", &age);

    printf("your first name is %s,\nyour age is %d \n", firstName, age);

    return 0;
}
