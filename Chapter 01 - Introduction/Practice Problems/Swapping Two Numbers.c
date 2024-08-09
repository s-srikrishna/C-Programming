// Program to Swap two numbers

#include <stdio.h>

int main() {
    int x;
    int y;

    // get input values for x and y
    scanf("%d", &x);
    scanf("%d", &y);

    // create a temporary variable
    int temp;

    // swap values using temp
    temp = x;
    x = y;
    y = temp;

    // print values after swapping
    printf("%d\n%d", x, y);

    return 0;
}
