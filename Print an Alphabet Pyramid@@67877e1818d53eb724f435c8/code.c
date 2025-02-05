#include <stdio.h>

int main() {
    int x, i, j, y, n;
    scanf("%d", &x);
    for (i = 1; i <= x; i++) {
        for (y = 1; y <= x - i; y++) {
            printf(" ");
        }
        n = 65;
        for (j = 1; j <= i; j++) {
            printf("%c ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
