#include<stdio.h>
int main(){
    char a;
    short b;
    int c;
    long d;
    long long f;
    float g;
    double h;
    scanf("%c",&a);
    scanf("%hd",&b);
    scanf("%d",&c);
    scanf("%ld",&d);
    scanf("%lld",&f);
    scanf("%f",&g);
    scanf("%lf",&h);
    
    
    printf("The 'char' variable is %c, it takes %d byte.\n", a, sizeof(a));
    printf("The 'short' variable is %hd, it takes 2 bytes.\n", b, sizeof(b));
    printf("The 'int' variable is %d, it takes %d bytes.\n", c, sizeof(c));
    printf("The 'long' variable is %ld, it takes %d bytes.\n", d, sizeof(d));
    printf("The 'long long' variable is %lld, it takes %d bytes.\n", f, sizeof(f));
    printf("The 'float' variable is %f, it takes %d bytes.\n", g, sizeof(g));
    printf("The 'double' variable is %lf, it takes %d bytes.", h, sizeof(h));
    return 0;
}