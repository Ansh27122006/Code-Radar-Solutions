#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        ar[i]=v;
    }
    int c=1;
    int l=sizeof(ar)/sizeof(ar[0]);
    int max=ar[0],min=ar[0];
    for(int i=0;i<l;i++){
        if(ar[i]>max){
            max=ar[i]
        }
        if(ar[i]<min){
            min=ar[i]
        }
    }
    printf("%d %d",min,max);
}