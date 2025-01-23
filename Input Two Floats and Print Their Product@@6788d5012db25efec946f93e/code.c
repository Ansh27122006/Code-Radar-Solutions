#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    printf("Product: %.2f",x*y);
    return 0;
}