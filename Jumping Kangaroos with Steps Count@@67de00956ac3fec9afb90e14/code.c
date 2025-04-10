// Your code here...
int kangaroo(int x1,int v1,int x2,int v2){
    int a=1;
    for(int i=0;i<=10;i++){
        if(x1+i*v1 == x2+i*v2){
            return i;
            a=0;
            break;
        }
    }
    // if(a==1){
    //     return -1;
    // }
}