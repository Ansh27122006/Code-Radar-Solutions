#include <stdio.h>
#include <string.h>

int main() {
    char s[30];
    fgets(s, sizeof(s), stdin);
    
    int l = strlen(s);
    printf("%d", l);
    return 0;
}
