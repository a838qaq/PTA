#include<stdio.h>
#include<string.h>
int num[1005];ans[1005];
int main(){
    int n;
    memset(num, -1, 1005);
    memset(ans, -1, 1005);
    scanf("%d", &n);
    
    
    if(n == 1){
        printf("1");
        return 0;
    }
    
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    
    int ans = 1, lenth = 1;
    for(int i = 0; i < n; i++){
        lenth = 1;
        for(int j = i; j < n; j++){
            if(num[i] == num[j + 1]) lenth++;
            else{
                i = j ;
                ans = ans >= lenth? ans : lenth;
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
    
