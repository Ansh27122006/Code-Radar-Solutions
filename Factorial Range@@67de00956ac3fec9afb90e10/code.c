int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
void factorialRange(int s,int e){
    if(s>e || s<0 || e<0){
        printf("Invalid range");
    }else{
        for(int i=s;i<=e;i++){
            printf("%d\n",factorial(i));
        }
    }
}