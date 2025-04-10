// Your code here...
int mostPlayedGame(int games[],int n){
    int arr1[10]={0};
    for(int i=0;i<n;i++){
        arr1[arr[0]]++;
    }
    int a=0;
    for(int i=0;i<10;i++){
        if(arr1[i]>a){
            a=arr1[i];
        }
    }
    return a;
}