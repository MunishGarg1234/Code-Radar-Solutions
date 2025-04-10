// Your code here...
int kangaroo(int x1,int v1,int x2,int v2){
    int a=1;
    int x,y;
    for(int i=0;i<=100;i++){
        x=x1+i*v1;
        y=x2+i*v2;
        if(x==y){
            return i;
            a=0;
            break;
        }
    }
    if(a==1){
        return -1;
    }
}