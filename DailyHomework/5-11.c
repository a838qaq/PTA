//函数被调用的例子如下：
#include <stdio.h>

//判断一个数是否为完全数的函数
int        isPerfect(int);

//打印完全数的函数 
void    printPerfact(int);

int main()
{
    int i,a,b,count;

    scanf("%d%d",&a,&b);
    count = 0 ;//a,b两数间完全数的数量，初始化为0 
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //如果是完全数 
        {
            printPerfect(i) ;//打印该完全数 
            count ++ ;  //计数器加1 
        }        
    }
    printf("The total number is %d.\n",count);//输出a,b两数间完全数的数量 
    return 0 ;
}
/* 请在这里填写答案 */\

int isPerfect(int n){
    int sum = 0;
    if(n % 2) return 0;
    for(int j = 1; j < n; j++){
        if(!(n % j)) sum = sum + j;
    }
    if(sum == n) return 1;
    else return 0;
}

void printPerfect(int n){
    int sum = 0;
    printf("%d=1", n);
    for(int k = 1; k < n; k++){
        if(!(n % k) && k != 1) printf("+%d", k);
    }
    printf("\n");
}