#include<stdio.h>

int    fun(int) ;

int main()
{
    int    x ;

    scanf("%d",&x);
    printf("The result is:y=%d\n",fun(x)) ;

    return 0 ;    
}

/* 请在这里填写答案 */

int fun ( int x ){
    if(x < 1) return x;
    else if(x <= 10) return 2 * x - 1;
    else if(x <= 100) return 3 * x - 11;
    else return x * x - 24;
}