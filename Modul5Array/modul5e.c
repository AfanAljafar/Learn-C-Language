#include<stdio.h>

int x,y,i,j;
int mat1[100][100], mat2[100][100], mat3[100][100];

int main(){
    printf("Enter the number of rows : ");
    scanf("%d",&x);
    printf("Enter the number of columns : ");
    scanf("%d",&y);
    printf("\n");

    //---input the matriks----
    printf("Enter element Matriks-1 : \n");
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            printf("Enter element of rows %d, and columns %d = ", i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");

    //----display the matriks----
    printf("The value of matriks-1 : \n");
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter element Matriks-2 : \n");
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            printf("Enter element of rows %d, and columns %d = ", i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n");

    //----display the matriks----
    printf("The value of matriks-2 : \n");
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //----SUM MATRIKS----
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("result of sum matriks : \n");
    for(i=1;i<=x;i++){
        for(j=1;j<=y;j++){
            printf("%d \t", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
