#include <stdio.h>
#include <stdlib.h>
char string[255];
void gets();

void main()
{
    FILE *f_teks;
    f_teks = fopen("contoh.txt", "a");
    gets(string);
    fputs(string, f_teks);
    fclose(f_teks);
}
