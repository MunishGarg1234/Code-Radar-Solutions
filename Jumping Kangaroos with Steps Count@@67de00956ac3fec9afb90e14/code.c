// Your code here...
int kangaroo(int x1,int v1,int x2,int v2){
    for(int i=0;i<=10;i++){
        if(x1+i*v1 == x2+i*v2){
            return i;
            break;
        }
        else{
            return -1;
        }
    }
}