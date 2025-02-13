#include <stdio.h>
#include <string.h>

int main() {
    char st[30];
    scanf("%s", st);  // No & needed
    int l = strlen(st);
    char s[30];  // Array for reversed string
    
    // Reverse string properly
    for(int i=l,j=0;i>=0;i--,j++) {
        s[j] = st[i];  // Correct index mapping
    }
    s[l] = '\0';  // Null-terminate the string
    
    printf("%s", s);
    return 0;
}
