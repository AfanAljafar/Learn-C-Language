//------array of char----

#include<stdio.h>
#include<string.h>

char kata[100];
int panjang;

void main(){
    printf("enter your word : ");
    gets(kata);
    panjang = strlen(kata);
    printf("your word : %s \n", kata);
    printf("your word reversed : ");
    for (panjang; panjang >= 0; panjang--)
        printf("%c", kata[panjang]);
}
