// Your code here...
int x=1;
int isPrime(num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            x=0;
            return 0;
        }
    }
    if(x==1){
        return 1;
    }
}