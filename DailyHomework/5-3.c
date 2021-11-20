//函数被调用的例子如下：
#include<stdio.h>

int    getDays(int,int) ;

int main()
{
    int    year, month ;

    scanf("%d%d",&year,&month);
    printf("There are %d days in month %d year %d.",getDays(year,month), month, year) ;

    return 0 ;    
}

/* 请在这里填写答案 */

int getDays(int year,int month){
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
    if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    if(year % 100 == 0){
        if(year % 400 == 0) return 29;
        else return 28;
    }
    if(year % 4 == 0) return 29;
    else return 28;
}