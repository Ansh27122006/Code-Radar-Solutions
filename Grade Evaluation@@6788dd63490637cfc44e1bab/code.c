#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%c",&x);
    if(x=='A'){
        printf("Excellent");
    }
    else if(x=='B'){
        printf("Good");
    }
    else if(x=='C'){
        printf("Average");
    }
    else if(x=='D'){
        printf("Below Average");
    }
    else if(x=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}