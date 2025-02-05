#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int k=0;k<=x-i;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}