#include<stdio.h>
int a[100];
int i,n,cari;
void main (){
    printf("Banyak data : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        printf("Data ke-%d :",i);
        scanf("%d",&a[i]);
    }
    printf("Data yang ingin dicari : ");
    scanf("%d",&cari);

    //proses sequential search
    i=1;
    while ((i<=n) && (a[i]!=cari))
    i=i+1;
    if (a[i]==cari)
    printf("Data ditemukan padaindeks : %d",i);
    else printf("Data tidak ditemukan");
}
