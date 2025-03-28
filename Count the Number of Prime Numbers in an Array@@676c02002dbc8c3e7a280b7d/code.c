#include <stdio.h>
int prime(int n){
    if(n<1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d ",n);
            return 0;
        }
    }
    return 1;
}
int countPrime(int ar[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(prime(ar[i])){
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("%d",countPrime(ar,n));
}
