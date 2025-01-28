#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x==0){printf("Zero");}
    else if(x>0){printf("Positive");}
    else{printf("Negative");}
    return 0;
}