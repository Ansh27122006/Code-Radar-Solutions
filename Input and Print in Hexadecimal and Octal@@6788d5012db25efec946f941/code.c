#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    printf("Hexadecimal: %X",x)
    printf("Octal: %o", x);
    return 0;
}