#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *f_struktur;
    int n, i;
    struct
    {
        char Menu[30];
        int Harga;
    } daftar;
    f_struktur = fopen("Daftar Harga.dat ", "wb");
    printf("Banyak Menu : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Menu : ");
        while (getchar() != '\n')
            ; //fflush(stdin);
        gets(daftar.Menu);
        printf("Harga : ");
        while (getchar() != '\n')
            ; //fflush(stdin);
        scanf("%i", &daftar.Harga);
        fwrite(&daftar, sizeof(daftar), 1, f_struktur);
    }
    fclose(f_struktur);
}
