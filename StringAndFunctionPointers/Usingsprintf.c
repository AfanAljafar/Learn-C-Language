#include <stdio.h>

int main()
{
    char info[100];
    char dept[25]; // using an uninitialized value (empty variable for input)
    //char dept[] = "RnD";  using an initialized value
    int employe; // using an uninitialized value (empty variable for input)
    //int employe = 7; using an initialized value

    printf("enter the name of department : ");
    gets(dept);
    printf("enter the number of employees : ");
    scanf("%d", &employe);

    sprintf(info, "%s department has %d employees", dept, employe);
    printf("%s \n", info);

    return 0;
}
