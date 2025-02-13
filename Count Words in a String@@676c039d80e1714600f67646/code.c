#include <stdio.h>
#include <string.h>

int main() {
    char s[30];
    fgets(s, sizeof(s), stdin);
    
    // Remove the newline character added by fgets
    s[strcspn(s, "\n")] = '\0';
    
    int l = strlen(s);
    int c = 0;
    
    // Check for leading spaces
    int i = 0;
    while (s[i] == ' ' && i < l) {
        i++;
    }
    
    // Count words in the string
    for (; i < l; i++) {
        if (s[i] == ' ' && s[i-1] != ' ') {
            c++;
        }
    }
    
    // If the string is not empty, add one for the last word
    if (l > 0 && s[l-1] != ' ') {
        c++;
    }
    
    printf("%d\n", c);
    return 0;
}
