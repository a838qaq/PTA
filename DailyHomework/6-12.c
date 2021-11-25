#include<stdio.h>

int countBinary(int);

int main()
{
    int        n;

    scanf("%d",&n);
    printf("%d\n",countBinary(n));

    return 0 ;
}

/* 请在这里填写答案 */

int countBinary(int n){
    if(n == 0 || n == 1) return 1;
    else{
        return 1 + countBinary(n / 2);
    }
}