#include <stdio.h>

int main() {
    int x, y;
    char z;
    scanf("%d %d", &x, &y);
    scanf(" %c", &z);  // Added a space before %c to consume the newline character

    if (z == '+') {
        printf("%d", x + y);
    } else if (z == '-') {
        printf("%d", x - y);
    } else if (z == '*') {
        printf("%d", x * y);
    } else if (z == '/') {
        if (y != 0) {  // Check for division by zero
            printf("%d", x / y);
        } else {
            printf("error: division by zero");
        }
    } else {
        printf("error");
    }

    return 0;
}
