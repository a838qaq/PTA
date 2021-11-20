#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > 22){
        printf("error");
        return 0;
    }
    if(b > 22){
        printf("error");
        return 0;
    }
        
    if(a == 21 || a == 22){
        if(b >= 21) {
            printf("error");
            return 0;
        }
        else {
            printf("A win");
            return 0;
        }
    }

    
    
    if(b == 21 || b == 22){
        if(a >= 21) {
            printf("error");
            return 0;
        }
        else {
            printf("B win");
            return 0;
        }
    }
    
    
    if(a > b) printf("A win");
    if(a < b) printf("B win");
    if(a == b) printf("no result");
    return 0;
}