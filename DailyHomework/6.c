#include<stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int count;
        int sum = 0;
        scanf("%d", &count);
        for(int j = 0; j < count; j++){
            int t;
            scanf("%d", &t);
            sum +=t;
        }
        if(sum < 100) printf("%d\n", sum);
        if(sum >= 100 && sum < 200) printf("%d\n", sum - 30);
        if(sum >= 200 && sum < 300) printf("%d\n", sum - 70);
        if(sum >= 300 && sum < 400) printf("%d\n", sum - 110);
        if(sum >= 400) printf("%d\n", sum - 160);
    }
    return 0;
}