// Program to Divide N chocolates among M children

#include <stdio.h>

int main() {
    int chocolate;
    int children;

    // get input values for chocolate and children
    scanf("%d", &chocolate);
    scanf("%d", &children);

    // find number of chocolate each children gets using the / operator
    int chocolate_per_child = chocolate / children;
    printf("%d\n", chocolate_per_child);

    // find remaining chocolate using the % operator
    int remaining_chocolates = chocolate % children;
    printf("%d", remaining_chocolates);

    return 0;
}
