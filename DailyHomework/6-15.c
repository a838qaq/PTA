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

/* ����������д�� */

void reverse(int n){
    if(n == 0) return;
    else{
        printf("%d", n % 10);
        reverse(n / 10);
    }
}