#include <stdio.h>
int main() {
    char ch[100];
    fgets(ch,100,stdin);
    char ch1;
    scanf(" %c",&ch1);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a' || ch[i]=='e'|| ch[i]=='i'|| ch[i]=='o'|| ch[i]=='u'|| ch[i]=='A'|| ch[i]=='E'|| ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U'){
            ch[i]==ch1;
        }
    }
    printf("%s",ch);
    return 0;
}