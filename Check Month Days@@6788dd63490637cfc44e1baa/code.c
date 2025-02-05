#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if(x==1){
        printf("31");
    }
    else if(x==2){
        printf("28");
    }
    else if(x==3){
        printf("31");
    }
    else if(x==4){
        printf("30");
    }
    else if(x==5){
        printf("31");
    }
    else if(x==6){
        printf("30");
    }
    else if(x==7){
        printf("31");
    }
    else if(x==8){
        printf("31");
    }
    else if(x==9){
        printf("30");
    }
    else if(x==10){
        printf("31");
    }
    else if(x==11){
        printf("30");
    }
    else if(x==12){
        printf("31");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}