#include<stdio.h>
int main(){
    char a;
    int b;
    float c;
    scanf("%c%d%f",&a,&b,&c);
    printf("The sex is %c, the age is %d, and the height is %.6f.",a,b,c);
    return 0;
}