#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int max = -1000000, min = 1000000;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        sum += temp;
        if(max <= temp) max = temp;
        if(min >= temp) min = temp;
    }
    printf("%d %d %d", sum, max, min);
    return 0;
}