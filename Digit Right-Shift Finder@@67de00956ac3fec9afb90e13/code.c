// Your code here...
int digitRightShift(int n){
    int org,r,ans=0;
    org=n;
    while(n!=0){
        r=org%10;
        ans=ans*10+r;
        org=org/10;
    }
    if(n==ans){
        return n;
    }
}