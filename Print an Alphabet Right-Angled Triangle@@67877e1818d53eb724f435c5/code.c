#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x, c=65;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){
            printf("%c ",j+c);
        }
        printf("\n");
    }
    return 0;
}