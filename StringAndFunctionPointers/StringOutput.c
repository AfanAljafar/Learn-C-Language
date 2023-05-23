#include <curses.h>
#include <stdio.h>

int main()
{
    char name[50];
    printf("enter your name : ");
    //gets(name); Note: for safety, use fgets
    fgets(name, 50, stdin);

    fputs(name, stdout);
    printf("your awesome!!! \n");

    return 0;
}
