#include<stdio.h>

int a[100],i,n;

void main(){
    printf("Banyak Data = "); scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Data Ke-%d= ",i);
        scanf("%d",&a[i]);
    }
}
