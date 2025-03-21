#include <stdio.h>
void zeroes(int n, int arr[]){
    int index = 0;
    for(int i=0; i<n;i++){
        if(arr[i] != 0){
            arr[index++] = arr[i];
        }
    }
    while(index < n){
        arr[index++] =0;
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        int v;
        scanf("%d",&v);
        ar[i]=v;
    }
    zeroes(n,ar);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}