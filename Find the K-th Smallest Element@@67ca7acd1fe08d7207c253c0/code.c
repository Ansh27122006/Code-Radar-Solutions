void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int swap=0;
        for(int j=0;j<n-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                swap=1;
            }
        }if(swap==0){
            break;
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    sort(arr,n);
    return arr[k];
}