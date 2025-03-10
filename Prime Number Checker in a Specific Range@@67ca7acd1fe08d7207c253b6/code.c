int printPrimesInRange(int a, int b) {
    int c=0;
    for(int i=a;i<=b;i++){
        int flag =1;
        for(int j=2;j<i;j++){
            if (i%j==0){
                flag=0;
                break;
            }
        }
        if (flag==1 && i>1){
            printf("%d ",i);
            c++;
        }
    }
    if(c==0){
            printf("No prime numbers");
        }
    return 0;
}