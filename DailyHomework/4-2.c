#include<stdio.h>
int main(){
    int n;
    int sum = 2;
    scanf("%d", &n);
    if(n == 1){
        printf("2");
    }
    else if(n == 0) printf("1");
    else{
        for(int i = 2;i <= n; i++){
            sum += i;
        }
        printf("%d", sum);
    }
    
    return 0;
}