//--- selection sorting---

#include<stdio.h>

int a[100];
int n, i, j;
int min, temp;

void main(){
    printf("Banyak data : ");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++){
        printf("Data ke - %d : ", i);
        scanf("%d", &a[i]);
    }

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
}
