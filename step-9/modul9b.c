#include <stdio.h>
#include <stdlib.h>

char string[255];

void main()
{
    FILE *f_teks;
    f_teks = fopen("contoh.txt", "r");

    while (fgets(string, sizeof string, f_teks) != NULL);
    printf("%s", string);
    fclose(f_teks);
}
