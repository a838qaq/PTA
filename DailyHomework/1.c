#include<stdio.h>

int f(int d, int t){
    if(t == 0) return 1;
    else if(t % 2 == 1) return d * f(d, t - 1);
    else if(t % 2 == 0){
        int temp = f(d, t / 2);
        return temp * temp;
    }
}

int main(){
    int t;
    int d;
    scanf("%d %d", &d, &t);
    printf("%d", f(d, t));

    return 0;
}