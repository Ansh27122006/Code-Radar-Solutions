#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("%c",'A');
    }
    else if(x>=80){
        printf("%c",'B');
    }
    else if(x>=70){
        printf("%c",'C');
    }
    else if(x>=60){
        printf("%c",'D');
    }
    else{
        printf("%c",'F');
    }
    return 0;
}