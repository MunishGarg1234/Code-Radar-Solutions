// Your code here...
int x=1;
int isPrime(int y){
    for(int i=2;i<y;i++){
        if(y%i==0){
            x=0;
            return -1;
        }
    }
    if(x==1){
        return 1;
    }
}