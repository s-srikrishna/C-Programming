// Program to convert Centimeters to Feet

#include<stdio.h>

int main() {

    double centimeter;
    double ratio = 0.0328;

    // get double input value
    scanf("%lf", &centimeter);

    // convert centimeter to feet
    double feet = centimeter * ratio;

    // print the result in feet
    printf("%lf", feet);

    return 0;
}
