#include<stdio.h>
int main(){
    char ch[1000];
    scanf("%s", ch);
    printf("%c", ch[0]);
    for(int i = 1; ch[i]; i++){
        printf(" %c", ch[i]);
    }
    printf("\n");
    return 0;
}