int sort(int ar[],int n){
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
int findUnsortedSubarray(int ar[],int n){
    for(int i=0;i<n;i++){
        r[i]=ar[i];
    }
    sort(ar,n);
    int c=0;
    for(int i=0;i<n;i++){
        if(ar[i]!=r[i]){
            c++;
        }
    }
    return c;
}