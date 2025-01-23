#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s1[30], s2[30];
    printf("%s", welcome());
    return 0;
}