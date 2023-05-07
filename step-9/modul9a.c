#include <stdio.h>
#include <stdlib.h>

char string[255];
int gets();

void main()
{
    FILE *f_teks;
    f_teks = fopen("contoh.txt", "w+");
    gets(string);
    fputs(string, f_teks);
    fclose(f_teks);
}
