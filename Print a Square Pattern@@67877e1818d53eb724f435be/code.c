#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}