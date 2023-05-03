//---insertion sorting method---

#include<stdio.h>

int a[100];
int n, i, j;
int temp;

void main (){

    printf("Banyak data : ");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++){
        printf("Data ke - %d : ", i);
        scanf("%d", &a[i]);
    }

    //--- insertion sorting method---
    for(i=2;i<=n;i++){

        temp = a[i];
        j = i;
        while((j>1) && (temp<a[j-1])){

            a[j] = a[j-1];
            j = j - 1;
        }
        a[j]=temp;
    }

    //---Display the result---
    printf("Hasil selection sorting : \n");
    for(i=1;i<=n;i++){
        printf("%d", a[i]);
        printf("\n");
    }

}


