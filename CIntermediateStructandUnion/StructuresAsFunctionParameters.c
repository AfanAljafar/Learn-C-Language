#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *class);
void display_course(course class);

int main()
{
    course c1;
    course c2;
    update_course(&c1);
    display_course(c1);

    return 0;
}

void update_course(course *class)
{
    strcpy(class->title, "C language course");
    class->id = 777;
    class->hours = 12.30;
}

void display_course(course class)
{
    printf("ID\tTitle Class\t\tHours\n");
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}
