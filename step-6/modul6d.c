//---Bubble sorting---

#include<stdio.h>

int n, i, j;
int a[100];
int temp;

void main(){

    printf("Banyak data : ");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++){
        printf("Data ke - %d : ", i);
        scanf("%d", &a[i]);
    }

    //--- Bubble Sorting ---
    for(i=n; i>=2; i--){
        for(j=2; j<=i; j++){
            if(a[j-1]>a[j]){

                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }

    //---Display the result---
    printf("Hasil selection sorting : \n");
    for(i=1;i<=n;i++){
        printf("%d", a[i]);
        printf("\n");
    }

}
