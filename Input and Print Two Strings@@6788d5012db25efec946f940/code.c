#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s1[30], s2[30];
    scanf("%s",&s1);
    scanf("%s",&s2);
    printf("You entered: %s and %s",s1,s2);
    return 0;
}