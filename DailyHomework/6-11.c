#include<stdio.h>

int convert(int n);

int main()
{
    int        n ;

    scanf("%d",&n);

    printf("%d\n",convert(n)) ;
    return 0 ;    
}

/* 请在这里填写答案 */

int convert(int n){
    if(n == 0 || n == 1) return n;
    else return n % 10 + convert(n / 10) * 2;
}