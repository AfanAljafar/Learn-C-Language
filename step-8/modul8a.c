//--- fungsi rekursif untuk mencari nilai faktorial---

#include <stdio.h>

int faktorialRekursif(int x);
int x, hasil;

int main()
{
    printf("FUNGSI FAKTORIAL\n");
    printf("Masukkan angka : ");
    scanf("%i", &x);
    hasil = faktorialRekursif(x);
    printf("Hasil faktorial = %i\n", hasil);
    return 0;
}

int faktorialRekursif(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else if (n > 1)
    {
        return n * faktorialRekursif(n - 1);
    }
}
