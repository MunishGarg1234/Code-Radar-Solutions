// Your code here...
int digitRightShift(int n){
    int r,ans=0,p=1,a,b=1;
    a=n%10;
    int i=0;
    while(n!=0){
        n=n/10;
        r=n%10;
        ans=ans+r*p;
        p=p*10;
        i++;
    }
    for(int j=1;j<=i-1;j++){
        b=b*10;
    }
    ans=ans+b*a;
    return ans;
}