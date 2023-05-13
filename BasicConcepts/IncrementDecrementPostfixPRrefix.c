#include <stdio.h>

int main()
{
    int x, y, z;

    /*The prefix form increments/decrements the variable
    and then uses it in the assignment statement. */

    /*The postfix form uses the value of the variable first,
    before incrementing/decrementing it.*/

    //postfix decrement
    z = 3;
    x = z--; /* assign 3 to x, then decrement z to 2 */
    printf("x=%d \n", x);
    printf("z=%d \n", z);


    //prefix increment
    y = 3;
    x = ++y; /* increment y to 4, then assign 4 to x */

    printf("x=%d \n", x);
    printf("y=%d \n", y);

    return 0;
}
