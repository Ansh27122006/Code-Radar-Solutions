#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    if(z=='+'){
        printf("%d",x+y);
    }
    else if(z=='-'){
        printf("%d",x-y);
    }
    else if(z=='*'){
        printf("%d",x*y);
    }
    else if(z=='/'){
        printf("%d",x/y);
    }
    else{
        printf("error");
    }
    return 0;
}