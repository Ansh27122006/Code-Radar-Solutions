#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    printf("You entered: %c", ch);
    return 0;
}