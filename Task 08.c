#include <stdio.h>

int main() {
    int i;
    float f;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("\nYou entered:\nInteger: %d\nFloat: %f\nCharacter: %c\n", i, f, c);
    return 0;
}

