#include<stdio.h>
char ch[105];
int main(){
    fgets(ch, 105, stdin);
    char temp;
    int alp = 0, num = 0, space = 0, others = 0;
    for(int i = 0; ch[i] != '\n'; i++){
        if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')) alp++;
        else if(ch[i] == ' ') space++;
        else if(ch[i] >= '0' && ch[i] <='9') num++;
        else others++;
    }
    printf("%d %d %d %d",alp ,space, num, others);
    return 0;
}