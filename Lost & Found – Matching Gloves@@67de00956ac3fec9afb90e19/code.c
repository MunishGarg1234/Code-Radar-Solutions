// Your code here...
int countGlovePairs(int gloves[],int n){
    int count[100]={0};
    for(int i=0;i<n;i++){
        count[gloves[i]]++;
    }
    int count1=0;
    for(int i=0;i<99;i++){
        if(count[i]%2==0 && count[i]!=0){
            count1=count1+count[i]%2;
        }
    }
    return count1;
}