#include <stdio.h>
#include<ctype.h>
int main() {
    char ch[50];
    fgets(ch,50,stdin);
    int count=0;
    for(int i=0;ch[i]!=0;i++){
        ch[i]=tolower(ch[i]);
        if(ch[i]=='a'|| ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}