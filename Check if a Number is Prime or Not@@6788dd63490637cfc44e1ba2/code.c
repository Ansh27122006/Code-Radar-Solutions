#include <stdio.h>
int main() {
    int i,a,flag=1;
    printf("enter no.:\n");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if (a%i==0){
            flag=0;
            break;
            }
    }
    if (flag==0||a<2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
