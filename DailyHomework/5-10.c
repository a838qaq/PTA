//函数被调用的例子如下：
#include<stdio.h>

int judgeTriangle(int,int,int) ; 

int main()
{
    int        a, b, c ;    

    scanf("%d%d%d",&a,&b,&c);

    switch(judgeTriangle(a,b,c))
    {
        case    -1    :    printf("It is not a triangle.\n") ;    break ;
        case    0    :    printf("It is a scalenous triangle.\n") ;    break ;
        case    1    :    printf("It is a right-angled triangle.\n") ;    break ;
        case    2    :    printf("It is an isosceles triangle.\n") ;    break ;
        case    3    :    printf("It is a equilateral triangle.\n") ;    break ;
    }

    return 0;
}

/* 请在这里填写答案 */

int judgeTriangle(int a,int b,int c){
    if(a <= 0 || b <= 0 || c <= 0) return -1;
    
    int q = a + b, w = b + c, e = a + c;
    if(q <= c) return -1;
    if(w <= a) return -1;
    if(e <= b) return -1;
    
    
    if(a == b && b == c) return 3;
    
    if(a == b && b != c) return 2;
    if(a == c && b != a) return 2;
    if(b == c && a != c) return 2;
    
    int x = a * a, y = b * b, z = c * c;
    if(x + y == z) return 1;
    if(z + y == x) return 1;
    if(x + z == y) return 1;
    
    return 0;
}