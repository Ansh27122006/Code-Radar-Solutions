#include <stdio.h>
void swap(int *n,int *m){
    int temp=*n;
    *n=*m;
    *m=temp;
}
void bubbleSort(int n, int arr[]){
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}
void printArray(int n, int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}