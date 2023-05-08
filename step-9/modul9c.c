#include <stdio.h>
#include <stdlib.h>
char string;
void main()
{
    FILE *f_teks;
    f_teks = fopen("contoh.txt", "r");
    while ((string = fgetc(f_teks)) != EOF)
        printf("%c", string);
    fclose(f_teks);
}
