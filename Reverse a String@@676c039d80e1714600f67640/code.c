#include <stdio.h>
#include <string.h>

int main() {
    char st[30];
    scanf("%s", st);
    int l = strlen(st);
    char s[30];
    for(int i=l-1,j=0;i>=0;i--,j++) {
        s[j] = st[i];
    }
    s[l] = '\0';
    printf("%s", s);
    return 0;
}
