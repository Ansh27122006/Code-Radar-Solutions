#include <stdio.h>
#include <string.h>

int main() {
    char st[30];
    scanf("%s", st);
    int l = strlen(st);
    int c=0;
    for(int i=0;i<l;i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
