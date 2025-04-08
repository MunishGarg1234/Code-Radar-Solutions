// Your code here...
void incrementToPrimeDigits(int n){
    int org,r,p=1,ans=0;
    org=n;
    while(org!=0){
        r=org%10;
        if(r==1 || r==8 || r==9 || r==0){
            r=2;
        }
        else if(r==2){
            r=3;
        }
        else if(r==3 || r==4){
            r=5;
        }
        else if(r==5 || r==6){
            r=7;
        }
        else if(r==7){
            r=7;
        }
        ans=ans+p*r;
        p=p*10;
        org=org/10;
    }
    return org;
}