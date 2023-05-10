#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gets();

int main()
{
    FILE *f_struktur;
    FILE *f_struktur2;
    char hapus[50];
    struct
    {
        char Menu[30];
        int Harga;
    } daftar;
    f_struktur = fopen("Daftar Harga.dat", "rb");
    f_struktur2 = fopen("Daftar Harga2.dat", "ab+");
    printf("Menu yang akan dihapus : ");
    fflush(stdin);
    gets(hapus);
    while (fread(&daftar, sizeof(daftar), 1, f_struktur) == 1)
    {
        if (strcmp(daftar.Menu, hapus) != 0)
        {
            fwrite(&daftar, sizeof(daftar), 1, f_struktur2);
        }
    }
    fclose(f_struktur);
    fclose(f_struktur2);
    remove("Daftar Harga.dat");
    rename("Daftar Harga2.dat", "Daftar Harga.dat");
}
