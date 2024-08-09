// Program to find the Area of a Rectangle

#include <stdio.h>

int main() {
    int length;
    int breadth;
    int area;

    // get length and breadth input
    scanf("%d\n%d", &length, &breadth);

    // find the area
    area = length * breadth;

    // print the area
    printf("%d", area);

    return 0;
}
