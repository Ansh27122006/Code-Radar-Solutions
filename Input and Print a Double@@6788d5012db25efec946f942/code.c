#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double x;
    scanf("%lf",&x);
    printf("You entered: %.4lf", x);
    return 0;
}