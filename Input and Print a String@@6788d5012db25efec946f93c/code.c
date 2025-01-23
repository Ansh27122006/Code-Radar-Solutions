#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char st[30];
    scanf("%s",&st);
    printf("You entered: %s", st);
    return 0;
}