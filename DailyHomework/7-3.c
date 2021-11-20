#include<stdio.h>
int main(){
    double a, b, c, d, total;
    scanf("%lf%lf%lf%lf",&a, &b, &c, &d);
    total = (a+b)*(a-b)+c/d;
    printf("%.6lf",total);
    return 0;
}