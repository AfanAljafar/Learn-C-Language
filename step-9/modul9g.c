#include <stdio.h>
#include <stdlib.h>

void gets();

int main()
{
    FILE *f_struktur;
    int n, i;
    struct
    {
        char Menu[30];
        int Harga;
    } daftar;
    f_struktur = fopen("Daftar Harga.dat", "ab");
    printf("Banyak Menu Tambahan : ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Menu : ");
        fflush(stdin);
        gets(daftar.Menu);
        printf("Harga : ");
        fflush(stdin);
        scanf("%i", &daftar.Harga);
        fwrite(&daftar, sizeof(daftar), 1, f_struktur);
    }
    fclose(f_struktur);
}
