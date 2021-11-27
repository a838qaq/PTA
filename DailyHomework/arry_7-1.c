#include<stdio.h>
#include<string.h>
double num[105];
int main(){
    memset(num, 0, 105);
    int n;
    scanf("%d", &n);
    double ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%lf", &num[i]);
        ans += num[i];
    }
    printf("%.2lf", ans / n);
    return 0;

}
