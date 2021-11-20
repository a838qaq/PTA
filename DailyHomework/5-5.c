//函数被调用例子如下：
#include<stdio.h>

int reverseNum(int) ; 

int main()
{
    int        num ;

    scanf("%d",&num);
    printf("The reverse form of number %d is %d.\n",num,reverseNum(num)) ;

    return 0;
}

/* 请在这里填写答案 */

int f(int a, int n){
    if(n == 0) return 1;
    if(n % 2) return a * f(a, n - 1);
    else{
        int t = f(a, n / 2);
        return t * t;
    }
}

int reverseNum(int num){
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
    return num2;
}