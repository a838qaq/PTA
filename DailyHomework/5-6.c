//���������õ��������£�
#include<stdio.h>

int mypow(int , int ) ;

int main()
{
    int x, n ;

    scanf("%d%d",&x,&n) ;
    printf("%d\n",mypow(x,n)) ;

    return 0;
}

/* ����������д�� */

int mypow(int x,int n){
    if(!n) return 1;
    if(n % 2) return x * mypow(x, n - 1);
    else{
        int t = mypow(x, n / 2);
        return t * t;
    }
}