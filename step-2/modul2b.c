#include<stdio.h>
int i;
void main(){
    printf("Enter the order of the day :");
    scanf("%d", &i);
    switch(i){
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thusday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        case 7:printf("Sunday");break;
        default: printf("order of days out of order"); break;
    }
    //return 0;
}

