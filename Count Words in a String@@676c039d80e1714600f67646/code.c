#include <stdio.h>
#include <string.h>

int main() {
    char s[30];
    fgets(s, sizeof(s), stdin);
    int l = strlen(s);
    int c=0;
    for(int i=0;i<l;i++) {
        printf("%c",s[i])
        if(s[i]==' '){
            c++;
        }
    }
    printf("%d", c+1);
    return 0;
}
