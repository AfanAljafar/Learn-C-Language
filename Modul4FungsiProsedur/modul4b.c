//using input parameter then output

#include <stdio.h>

void swap(int *a, int *b);

void main(){
    int x,y;
    printf("enter x number to swap : ");
    scanf("%d", &x);
    printf("enter y number to swap : ");
    scanf("%d", &y);
    swap(&x,&y);
    printf("swap result : \n");
    printf("x : %d \n", x);
    printf("y : %d \n", y);
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
