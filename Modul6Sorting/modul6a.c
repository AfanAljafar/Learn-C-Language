//------Counting sort -----

#include<stdio.h>
int a[100], b[100];
int n, i, j, maks, min, num;

void main(){

    printf("banyak data : ");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i++){

        printf("data ke - %d : ", i);
        scanf("%d", &a[i]);
        if(i==1){
            maks=a[i];
            min=a[i];
        }
        if(a[i]>maks) maks=a[i];
        if(a[i]<min) min=a[i];
    }

    //---mengosongkan array---
    for (i=min;i<=maks;i++){
        b[i];
    }

    //---memulai sorting---
    for (i=1;i<=n;i++){
        b[a[i]]=b[a[i]]+1;
    }
    num=1;

    for (i=min;i<=maks;i++){
        for (j=1;j<=b[i];i++){
            a[num]=i;
            num=num+1;
        }
    }

    //---menampilkan hasil sorting---
    printf("data hasil sorting dari kecil ke besar : \n");
    for (i=1;i<=n;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}
