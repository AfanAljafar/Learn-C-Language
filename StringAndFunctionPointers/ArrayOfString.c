/*A two-dimensional array can be used to store related strings.
Consider the following statement which declares an array with 3 elements,
each holding 15 characters:

char trip[3][15] = {"suitcase", "passport", "ticket"}; */

/* An easier, more intuitive way to deal with a collection of
related strings is with an array of pointers,
as in the following program: */

#include <stdio.h>

char *trip[] = {"suitcase", "passport", "ticket"};

int main()
{
    int i;

    printf("please bring the following : \n");

    for (i = 0; i < 3; i++)
    {
        printf("%s \n", trip[i]);
    }

    return 0;
}
