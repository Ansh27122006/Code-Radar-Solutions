#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c", &ch);
    if (isdigit(ch)) {
        printf("Digit");
    }
    else if (isalpha(ch)) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }
    else {
        printf("Special Character");
    }

    return 0;
}
