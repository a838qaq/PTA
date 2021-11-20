#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a >= (b + c)){
        printf("The edges cannot make up of a triangle.");
        return 0;
    }
    if(b >= (a + c)){
        printf("The edges cannot make up of a triangle.");
        return 0;
    }
    if(c >= (b + a)){
        printf("The edges cannot make up of a triangle.");
        return 0;
    }
    double s, p;
    p = (a + b + c) / 2; 
    s = sqrt(p*(p - a)*(p - b)*(p - c));
    printf("%.3lf", s);

    return 0;
}