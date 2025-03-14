#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int ar[n],ar2[n];
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        ar[i]=v;
    }
    int l=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<l;i++){
        int c=0;
        for(int j=0;j<l;j++){
            if(ar[i]==ar[j]){
                    c++;
            }
        }
        ar2[i]=c;
    }
    int m=ar2[0],ind=0;
    for(int i=0;i<l;i++){
        if(ar2[i]>=m){
            m=ar2[i];
            ind=i;
        }
    }
    printf(ar[ind]);
}



