#include <stdio.h>
int main() {
    int n,k;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        ar[i]=v;
    }
    scanf("%d",&k);
    int l=sizeof(ar)/sizeof(ar[0]);
    for(int i=l-k;i<l;i++){
        printf("%d ",ar[i]);
    }
    for(int i=0;i<l-k;i++){
        printf("%d ",ar[i]);
    }
}
