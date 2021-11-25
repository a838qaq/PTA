#include <stdio.h>

int findMax(int n) ;

int main()
{   
    int n ; 

    scanf("%d", &n); 
    printf("%d\n" , findMax( n ) ) ; 

    return 0;
}

/* 请在这里填写答案 */

int findMax(int n){
    if(n == 1){
        int num;
        scanf("%d", &num);
        return num;
    }
    else{
        int num2;
        scanf("%d", &num2);
        int t = findMax(n - 1);
        return num2 > t ? num2 : t;
    }
}