#include<stdio.h>
#include<string.h>


int num[105];
void search(int *num, int n, int a);

int main(){
    memset(num, 0, 105);
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        int a;
        scanf("%d", &a);
        search(num, n, a);
    }
    return 0;
}

void search(int *num, int n, int a){
    if(n == 1){
        printf("NULL\n");
        return;
    }
    
    
    
    for(int i = 0; i < n; i++){
        if(num[i] == a){
            if(i == 0 && n > 1){
                printf("%d\n", num[1]);
                return;
            }
            if(i == n - 1 && n > 1){
                printf("%d\n", num[i - 1]);
                return;
            }
            printf("%d %d\n", num[i - 1], num[i + 1]);
            return;
        }
    }
    printf("NULL\n");
    return;
}
