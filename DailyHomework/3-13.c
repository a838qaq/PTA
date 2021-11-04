#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
  
    if(a > b){
        int c = a;
        a = b;
        b = c;
    }
    
    int ta = a, tb = b;
    
    int max = 0, min = 0;
    
    for(;;){
        if(b % a == 0){
            max = a;
            break;
        }
        int d = b % a;
        b = a;
        a = d;
    }

    min = ta / max * tb;
    printf("%d %d", max, min);
    return 0;
}