//���������� ���������£�
#include<stdio.h>

int getDigit(long long n); 

int main()
{
    long long     n ;
    int            len ;

    scanf("%lld",&n);
    len = getDigit(n) ;
    if (len > 1)
        printf("The integer %lld has %d digits.\n",n, len) ;
    else
        printf("The integer %lld has %d digit.\n",n, 1) ;
    return 0 ;    
}

/* ����������д�� */

int getDigit(long long n){
    int count = 0;
    for(int i = 0; n ; i++){
        n /= 10;
        count++;
    }
    return count;
}