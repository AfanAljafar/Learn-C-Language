#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_struktur;
    struct
    {
        char Menu[30];
        int Harga;
    } daftar;
    f_struktur = fopen("Daftar Harga.dat", "rb");
    while (fread(&daftar, sizeof(daftar), 1, f_struktur) == 1)
    {
        printf("Menu : %s", daftar.Menu);
        printf("\n");
        printf("Harga : %i", daftar.Harga);
        printf("\n");
    }
    fclose(f_struktur);
}
