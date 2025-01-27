#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if (x & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}