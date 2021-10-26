#include<stdio.h>
int main(){
/*
    char ch;
    while(scanf("%c", &ch) == 1){
        if(ch == 'x') printf("a");
        else if(ch == 'y') printf("b");
        else if(ch == 'z') printf("c");
        else if(ch == 'X') printf("A");
        else if(ch == 'Y') printf("B");
        else if(ch == 'Z') printf("C");
        else printf("%c", ch + 3);
    }
    printf("\n");
*/    
    char ch[105];
    scanf("%s", ch);
    for(int i = 0; ch[i]; i++){
        if(ch[i] == 'x') printf("a");
        else if(ch[i] == 'y') printf("b");
        else if(ch[i] == 'z') printf("c");
        else if(ch[i] == 'X') printf("A");
        else if(ch[i] == 'Y') printf("B");
        else if(ch[i] == 'Z') printf("C");
        else printf("%c", ch[i] + 3);
    }
    return 0;
}