// Program for getting started with the basic structure of C and getting used to variables and printing them.

#include <stdio.h>

int main() {

    printf("Hello World!");

    // create float variable number
    float number = 78.32f;

    // print the variable
    printf("Float Number is: %f\n", number);

    // create int variable number
    int number1 = 78;

    // print the variable
    printf("Integer Number is: %d\n", number1);

    // create character variable
    char number2 = 'c';

    // print the variable
    printf("Character is: %c\n", number2);

    // create two variables together and print them
    int age = 25, id = 132;

    printf("Age and ID is: %d\n%d\n", age,id);

    // create the double variable
    double number3 = 59.86;

    // print the variable
    printf("Double Number is: %lf\n",number3);

    // Type Conversion

    // create a double variable number
    double number4 = 18.7;

    // declare an int variable result
    int result;

    // convert number to int and add 5 and store sum in result
    result = (int) number4 + 5;

   // print result
    printf("Result is: %d\n", result);

    return 0;
 }
