#include<stdio.h>
int f(int a, int n){
    if(n == 0) return 1;
    if(n % 2) return a * f(a, n -1);
    else {
        int temp = f(a, n / 2);
        return temp * temp;
    }
}
int main(){
    int num;
    scanf("%d", &num);
    int n = 0;
    int num2 = 0;
    int tnum = num;
    for(int i = 0; num; i++){
        num /= 10;
        n++;
    }
    num = tnum;
    for(int i = 0; num; i++){
        int c = num % 10;
        num2 += c * f(10, n - i - 1);
        num /= 10;
    }
    
    if(num2 == tnum) printf("Yes");
    else printf("No");
    return 0;
}