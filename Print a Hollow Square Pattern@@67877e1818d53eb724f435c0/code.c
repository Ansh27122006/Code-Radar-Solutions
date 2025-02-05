#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=0;j<x;j++){
            if(i==1||i==x||j==1||j==x){
                printf("*");
            }else{
                print(" ");
            }
        }
        printf("\n");
    }
    return 0;
}