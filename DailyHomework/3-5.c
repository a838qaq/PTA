#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n < 21){
        printf("0");
        return 0;
    }
    int s = 0;
    for(int i = 21; i < n; i++){
        if(!(i % 21)){
            s += i;
        }
    }
    printf("%d", s * s);
    return 0;
}