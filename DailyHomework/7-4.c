#include<stdio.h>
#define PI 3.14159265
int main(){
    double R, c, s;
    scanf("%lf",&R);
    c = 2*PI*R;
    s = PI*R*R;
    printf("The perimeter is %.4lf, the area is %.4lf.",c,s);
    return 0;
}