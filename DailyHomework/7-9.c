#include<stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int s;
    s = a + b + c + d;
    if(s < 20) printf("%d", 10 + s);
    else if(s >= 20 && s < 30) printf("%d",8 + s);
    else if(s >= 30 && s < 40) printf("%d", 5 + s);
    else printf("%d", s);
    
    return 0;
}