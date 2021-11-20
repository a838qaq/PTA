#include<stdio.h>
#include<math.h>
int main(){
    long double a, b, c, d;
    scanf("%Lf%Lf%Lf%Lf",&a, &b, &c, &d);
    if(fabs(b * c - d) < 0.00000000000000001 ) printf("error");
    else printf("%.1Lf", a/(b * c - d));
    return 0;
}