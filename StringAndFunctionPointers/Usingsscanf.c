#include <stdio.h>

int main()
{
    // char info[] = engineering RnD 6; using base info to output
    char info[100]; //using empty variable to input the contain element info
    char dept[25];
    char section[25];
    int employe;

    printf("enter info : ");
    gets(info);

    sscanf(info, "%s %s %d", dept, section, &employe);
    printf("%s section at %s department has %d employees \n", section, dept, employe);

    return 0;
}
