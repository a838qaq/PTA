#include <stdio.h>

int    evaluation(int n,int a) ;
int main()
{
       int        n , a ; 

       scanf("%d%d",&n,&a);       
       printf("%d\n",evaluation(n,a));

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


int evaluation(int n,int a){
    if(n == -1) return 1;
    else return f(a, n + 1) + evaluation(n - 1, a);
}