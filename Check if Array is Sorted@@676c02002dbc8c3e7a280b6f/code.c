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
    for(int i=0;i<l-1;i++){
        if(ar[i]>ar[i+1]){
            printf("Not Sorted");
            c=0;
            break;
        }
    }
    if(c){
        printf("Sorted");
    }
}