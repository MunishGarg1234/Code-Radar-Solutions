// Your code here...
int totalLikes(int days){
    int likes=0,peoples=5;
    for(int i=1;i<=days;i++){
        likes=likes+(peoples/2);
        peoples+=3;
    }
    return likes;
}