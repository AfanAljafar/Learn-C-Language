//binary searching
#include <stdio.h>

int n, i,j;
int a[100];
int search;
int min, temp;
int low, mid, high, idx;

void main(){

    printf("Banyak data : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Data ke - %d : ", i);
        scanf("%d", &a[i]);
    }



    //data diurutkan terlebih dahulu
    //isi bagian ini dengan sorting

    //---selection sorting procces---
    for(i=1;i<=n;i++){
        min = i;
        for(j=1;j<=n;j++){
            if(a[j]>a[min]){
                min = j;
            }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
        }
    }

    //---Display the result---
    printf("Hasil selection sorting : \n");
    for(i=1;i<=n;i++){
        printf("%d", a[i]);
        printf("\n");
    }

    printf("Data yang dicari : ");
    scanf("%d", &search);

    //binary search procces
    low=1;
    high=n;
    idx=0;
    while ((low<=high) && (idx==0))
    {
    mid=(low+high)/2;
    if (a[mid]==search)
    idx=mid;
    else if (a[mid]<search)
    low=mid+1;
    else high=mid-1;
    }
    if (idx!=0)
    printf("Data ditemukan pada indeks : %d \n",idx);
    else printf("Data tidak ditemukan\n");
}
