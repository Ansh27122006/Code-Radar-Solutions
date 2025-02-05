#include <stdio.h>
int main() {
    int i,a,flag=1;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if (a%i==0){
            flag=0;
            break;
            }
    }
    if (flag==0||a<2){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
