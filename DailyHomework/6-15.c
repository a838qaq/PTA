#include <stdio.h>

void reverse(int n) ; 

int main()
{
    int     n;

    scanf("%d",&n);
    reverse(n) ;
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */

void reverse(int n){
    if(n == 0) return;
    else{
        printf("%d", n % 10);
        reverse(n / 10);
    }
}