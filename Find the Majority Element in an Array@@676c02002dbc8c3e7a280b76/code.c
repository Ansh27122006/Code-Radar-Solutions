#include <stdio.h>
int MEA(int n, int arr[]){
    for(int i=0;i<l;i++){
        int c=0;
        for(int j=0;j<l;j++){
            if(ar[i]==ar[j]){
                    c++;
            }
        }
        if(c>n/2){
            return arr[i];
        }
    }
    return -1;
}
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        ar[i]=v;
    }
    printf("%d",MEA(n,ar));
}



