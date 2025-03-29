int findUnsortedSubarray(int ar[],int n){
    int c=0;
    for(int i=0;i<n-1;i++){
        int swap=0;
        for(int j=0;j<n-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                c++;
                swap=1;
            }
        }if(swap==0){
            break;
        }
    }
    return c;
}