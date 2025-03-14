#include <stdio.h>
int find(int ar[],int t){
    l=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<l;i++){
        if(ar[i]==k){
            return i;
        }
    }
    return -1;
}
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
    printf("%d",find(ar,k));
}