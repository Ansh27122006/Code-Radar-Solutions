#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x%3==0 && x%5==0){
        printf("Divisible by Both");
    }
    else if(x%5==0){
        printf("Divisble by 5");
    }
    else if(x%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}