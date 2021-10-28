#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x > 10000 || x < 1){
        printf("%d out of range", x);
        return 0;
    }
    int X;
    X = x * x;
    int a1[1000], a2[1000];
    int count = 0;
    for(int i = 0; x; i++){
        a1[i] = x % 10;
        x /= 10;
        count++;
    }
    for(int i = 0; X; i++){
        a2[i] = X % 10;
        X /= 10;
    }
    for(int i = 0; i < count; i++){
        if(a1[i] != a2[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}