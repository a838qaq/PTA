#include<stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);
    long long sum = 0;
    long long temp = 0;
    for(long long i = 1; i <= n; i++){
        if(i == 1 || i == 2){
            temp += 0;
        }
        else for(long long j = 3; j <= i; j++){
            temp += j * (j - 2) * (j - 1);
        }
       // sum += temp;
    }
    //printf("%lld", sum);
     printf("%lld", temp);
    return 0;
}