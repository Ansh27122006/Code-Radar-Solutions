#include <stdio.h>
#include <string.h>
char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    char st[30];
    scanf("%s",&st);
    int l=strlen(st);
    char s[30];
    for(int i=l-1;i>=0;i--){
        s[i]=st[i];
        printf("%s",s);
    }
    printf("You entered: %s", s);
    return 0;
}