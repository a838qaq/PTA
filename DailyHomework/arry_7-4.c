#include<stdio.h>
#include<string.h>
int vector[15];
int main(){
    memset(vector, 0, 15);
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n; i++){
        scanf("%d", &vector[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += vector[i] * vector[n + i];
    }
    printf("%d", ans);
    return 0;
}
