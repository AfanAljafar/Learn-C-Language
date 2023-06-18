#include <stdio.h>

int main()
{
    double height, width;
    double perimeter;
    printf("enter height : ");
    scanf("%lf", &height);
    printf("enter width : ");
    scanf("%lf", &width);
    perimeter = 2 * (height + width);
    printf("The perimeter of this rectangle = %lf\n", perimeter);
}
