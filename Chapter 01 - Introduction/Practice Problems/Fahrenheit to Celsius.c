//Program to convert Fahrenheit to Celsius

#include <stdio.h>

int main() {
    double fahrenheit;

    // take double input for fahrenheit
    scanf("%lf",&fahrenheit);

    // convert fahrenheit temperature to celsius
    double celsius = (fahrenheit - 32) * 5 / 9;

    // print the celsius temperature
    printf("%lf", celsius);

    return 0;
}
