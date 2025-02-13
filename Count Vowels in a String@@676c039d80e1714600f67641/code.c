#include <stdio.h>
#include <string.h>

int main() {
    char s[30];
    scanf("%s", s);
    int l = strlen(s);
    int c=0;
    for(int i=0;i<l;i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
