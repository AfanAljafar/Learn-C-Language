#include<stdio.h>

struct{
    char Name[100],
    Study[100],
    Faculty[100],
    Class[100]
} d;

int main(){

    printf("Name\t:\t");
    gets(d.Name);
    printf("Class\t:\t");
    gets(d.Class);
    printf("Study\t:\t");
    gets(d.Study);
    printf("Faculty\t:\t");
    gets(d.Faculty);
    printf("\n");

    printf("Your Bio:\n");
    printf("%s ", d.Name);
    printf("class %s ", d.Class);
    printf("Study %s ", d.Study);
    printf("Faculty %s ", d.Faculty);

    return 0;
}
