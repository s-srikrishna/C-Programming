// program to convert Kilograms to Pound

#include<stdio.h>

int main()  {
    double pound;

    // get input value for pound
    scanf("%lf", &pound);

    // convert pound to kg
    double kilograms = pound * 0.453592 ;

    // print the value of kg
    printf("%lf", kilograms);

    return 0;
}
