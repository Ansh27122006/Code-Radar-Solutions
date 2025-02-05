#include <stdio.h>

int main() {
    int x, i, j, y;
    scanf("%d", &x);
    for (i = 1; i <= x; i++) {
        for (y = 1; y <= x - i; y++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = x - 1; i >= 1; i--) {
        for (y = 1; y <= x - i; y++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
