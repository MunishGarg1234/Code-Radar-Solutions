// Your code here...
int isPrime(int y){
    if(y>=2){
        int x=1;
        for(int i=2;i<y;i++){
            if(y%i==0){
                x=0;
                return x;
            }
        }
        if(x==1){
            return 1;
        }
    }
    else{
        return 0;
    }
}