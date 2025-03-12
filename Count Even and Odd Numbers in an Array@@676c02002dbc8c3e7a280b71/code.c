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
    int e=0,o=0;
    for(int i=0;i<l;i++){
        if(ar[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("%d %d",e,o);
}