#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x%3==0 && x%5==0){
        printf("Divisible by both");
    }
    else if(x%5==0){
        printf("Divisble by 5");
    }
    else{
        printf("Divisible by 3");
    }
    return 0;
}