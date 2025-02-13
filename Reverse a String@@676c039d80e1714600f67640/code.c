#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    char st[30];
    scanf("%s",&st);
    int l=strlen(st);
    char s[];
    for(int i=0;i<l;i++){
        s[i]+=st[i];
    }
    printf("You entered: %s", s);
    return 0;
}