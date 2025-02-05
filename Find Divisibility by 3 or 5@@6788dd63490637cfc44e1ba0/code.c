#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x%3==0){
        printf("Divisible by 3");
    }
    else if(x%5==0){
        prinf("Divisble by 5");
    }
    else{
        printf("Divisible by Both");
    }
    return 0;
}