#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,z;
    scanf("%d %d",&x,&z);
    if (x>z){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}