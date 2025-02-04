#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}