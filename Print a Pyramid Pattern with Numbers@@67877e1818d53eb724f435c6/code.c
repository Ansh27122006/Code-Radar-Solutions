#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d", &x);

    for (int i=1;i<=x;++i) {
        for (int j=1;j<=x-i;++j) {
            printf(" ");
        }
        for (int k=1; k<=2*i-2;++k) {
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}