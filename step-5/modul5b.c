//array of record (struct)
#include <stdio.h>


struct mahasiswa{
    char nama[50], nim[50];
    int nilai;

};

struct mahasiswa a[100];
int i,n;

int main(){
    printf("Banyak Mahasiswa : ");
    scanf("%d", &n);
    //fflush(stdin);
    while (getchar() != '\n'); // o flush the output buffer of the stream, fflush(stdin); alternate

    for (i=1;i<=n;i++){
        printf("Mahasiswa ke - %d \n", i);

        printf("Nama Mahasiswa : ");
        gets(a[i].nama);

        printf("NIM : ");
        gets(a[i].nim);

        printf("Nilai : ");
        scanf("%d",&a[i].nilai);
        while (getchar() != '\n');
    }

    printf("\n");
    printf("Data Mahasiswa \n");

    for (i=1; i<=n;i++){
        printf("Mahasiswa %d \n",i);
        printf("Nama :%s \n",a[i].nama);
        printf("NIM : %s \n",a[i].nim);
        printf("Nilai : %i\n",a[i].nilai);
    }

    return 0;
}
