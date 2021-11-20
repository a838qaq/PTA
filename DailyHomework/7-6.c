#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a == b) printf("The two numbers are equal.");
    else if(a > b) printf("The larger number is %d, the smaller number is %d.", a, b);
    else  printf("The larger number is %d, the smaller number is %d.", b, a);
    return 0;
}