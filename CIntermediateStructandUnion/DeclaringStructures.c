#include <stdio.h>
#include <string.h>

struct student
{
    int age;
    char grade;
    char name[40];
};

int main()
{
    struct student s1;
    struct student s2;

    s1.age = 17;
    s1.grade = 'A';
    sprintf(s1.name, "Afan Aljfar");

    s2.age = 18;
    s2.grade = 'B';
    strcpy(s2.name, "Noir Chifuyu");

    /*struct variable initialized in the declaration by listing initial values
    in order inside curly braces*/
    struct student s3 = {19, 'A', "Rimuru Tempest"};

    /*initialize a structure using curly braces after declaration,
    need to type cast, as in the statements*/
    struct student s4;
    s4 = (struct student){20, 'C', "Demon Diablo"};

    /*use named member initialization
    when initializing a structure to initialize corresponding members*/
    struct student s5 = {.age = 21, .grade = 'A', .name = "Midoriya Izuku"};

    printf("Student : \n\tName\t: %s\n\tAge\t: %d\n\tGrade\t: %c\n", s1.name, s1.age, s1.grade);
    printf("Student : \n\tName\t: %s\n\tAge\t: %d\n\tGrade\t: %c\n", s2.name, s2.age, s2.grade);
    printf("Student : \n\tName\t: %s\n\tAge\t: %d\n\tGrade\t: %c\n", s3.name, s3.age, s3.grade);
    printf("Student : \n\tName\t: %s\n\tAge\t: %d\n\tGrade\t: %c\n", s4.name, s4.age, s4.grade);
    printf("Student : \n\tName\t: %s\n\tAge\t: %d\n\tGrade\t: %c\n", s5.name, s5.age, s5.grade);
}
