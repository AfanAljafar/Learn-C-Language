#include<stdio.h>

int sum(int a, int b);

void main(){

    int x,y;

    printf("first number: ");
    scanf("%d", &x);

    printf("second number: ");
    scanf("%d", &y);

    printf("sum result: %d", sum(x,y));
}
int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}
