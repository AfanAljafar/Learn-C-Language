//------without array method-----

/* #include<stdio.h>
int nilai1,nilai2,nilai3,nilai4,nilai5;
void main()
{
printf("Nilai Mahasiswa 1= ");
scanf("%d",&nilai1);
printf("Nilai Mahasiswa 2= ");
scanf("%d",&nilai2);
printf("Nilai Mahasiswa 3= ");
scanf("%d",&nilai3);
printf("Nilai Mahasiswa 4= ");
scanf("%d",&nilai4);
printf("Nilai Mahasiswa 5= ");
scanf("%d",&nilai5);
}
*/

//-------using array methode --------
#include <stdio.h>

int nilai[6],i,n;

void main(){
    n=5;
    for (i=1;i<=n;i++){
        printf("Nilai Mahasiswa ke-%d : ",i);
        scanf("%d", &nilai[i]);
    }
}
