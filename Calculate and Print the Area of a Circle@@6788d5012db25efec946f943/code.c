#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f",&r);
    printf("Area: %.2f",3.14*r*r);
    return 0;
}