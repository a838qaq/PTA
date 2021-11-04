#include<stdio.h>
int f(int a, int n){
    if(n == 0) return 1;
    if(n % 2) return a * f(a, n - 1);
    else{
        int t = f(a, n / 2);
        return t * t;
    }
}
int main(){
    int num, ans = 0;
    scanf("%d", &num);
    for(int i = 0; num; i++){
        int c = num % 10;
        ans += c * f(2, i);
        num /= 10;
    }
    printf("%d", ans);
    return 0;
}