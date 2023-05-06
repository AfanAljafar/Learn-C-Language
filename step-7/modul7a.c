//--- Sequential search ---

#include<stdio.h>

int a[100];
int i, n, lock, search;

void main(){

    printf("Banyak data : ");
    scanf("%d", &n);
    printf("\n");

    for(i=1; i<=n; i++){
        printf("Data ke - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");
    printf("Search : ");
    scanf("%d", &search);

    //--- Sequential Search Procces ---
    lock=0;
    for(i=1; i<=n; i++){
        if(a[i]==search){
            printf("data ditemukan : %d", i);
            lock=1;
            //break;
        }

    }
    if(lock==0){printf("data tidak ditemukan");}
}
