#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = m; i <= n; i++){
        int a = i / m;
        int temp = i;
        int sum = 0;
        for(int j = 0; temp; j++){
            int k = temp % 10;
            temp /= 10;
            sum += k * k;
        }
        if(a == sum) printf("%d\n", i);
    }
    return 0;
}