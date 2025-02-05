#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,c=65;
    scanf("%d",&x);
    for(int i=x;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}