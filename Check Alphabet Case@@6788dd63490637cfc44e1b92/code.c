#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if (c>='A' && c<='Z'){
        printf("Uppercase");
    }
    else if(c>='a' && c<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}