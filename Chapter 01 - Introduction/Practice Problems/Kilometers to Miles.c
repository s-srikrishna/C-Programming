// Program to convert Kilometers to Miles

#include <stdio.h>

int main() {

    double kilometers;

    // get input value for km
    scanf("%lf", &kilometers);

    // convert kilometer to miles
    double miles = kilometers / 1.6 ;

    // print the distance in miles
    printf("%lf", miles);

    return 0;
}
