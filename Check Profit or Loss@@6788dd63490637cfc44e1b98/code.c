#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,p;
    scanf("%d %d",&x,&y);
    p=y-x
    if(p>0){
        printf("Profit");
    }
    else if(p<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}