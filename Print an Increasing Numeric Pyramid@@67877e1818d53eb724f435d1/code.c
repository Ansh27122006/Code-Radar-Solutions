#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,n=1;
    scanf("%d", &x);

    for (int i=1;i<=x;++i) {
        for (int j=1;j<=x-i;++j) {
            printf(" ");
        }
        for (int k=1; k<=2*i-1;++k) {
            printf("%d",n++);
        }
        printf("\n");
    }

    return 0;
}