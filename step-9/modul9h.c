#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f_struktur;
    int no_record;
    long int offset_byte;
    struct
    {
        char Menu[30];
        int Harga;
    } daftar;
    f_struktur = fopen("Daftar Harga.dat", "rb");
    printf("Nomor Record yang mau ditampilkan : ");
    scanf("%d", &no_record);
    offset_byte = (no_record - 1) * sizeof(daftar);
    fseek(f_struktur, offset_byte, SEEK_SET);
    if (fread(&daftar, sizeof(daftar), 1, f_struktur) == 0)
        printf("Nomor Record Tidak Dikenali \n");
    else
    {
        printf("Menu : %s", daftar.Menu);
        printf("\n");
        printf("Harga: %i", daftar.Harga);
        printf("\n");
    }
    fclose(f_struktur);
}
