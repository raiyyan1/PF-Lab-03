#include <stdio.h>

int main() {
    double num;

    printf("Enter a decimal number: ");
    scanf("%lf", &num);

    printf("Default precision: %lf\n", num);
    printf("2 decimal precision: %.2lf\n", num);
    printf("5 decimal precision: %.5lf\n", num);

    return 0;
}
