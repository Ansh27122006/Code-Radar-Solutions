#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,n=1;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){
            printf("%d",n);
            if(n==0){
                n=1;
            }else{
                n=0;
            }
        }
        printf("\n");
    }
    return 0;
}