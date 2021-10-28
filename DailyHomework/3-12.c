#include<stdio.h>
int main(){
    int m, n;

    scanf("%d %d", &m, &n);
    n -= m;
    for(int i = 0; i <= m && i <= n; i++){
        for(int j = 0; j <= m && j * 2 <= n; j++){
            for(int k = 0; k <= m && k * 3 <= n; k++){
                if(i + j + k <= m && i + j * 2 + k * 3  == n){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}