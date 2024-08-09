// Program to find the maximum possible handshakes

#include <stdio.h>

int main() {

    int students;

    // get input value for students
    scanf("%d", &students);

    // use the formula to calculate maximum possible handshakes and print it
    int max_possible_handshake =  (students * (students - 1)) / 2;
    printf("%d", max_possible_handshake);

    return 0;
}
