#include<stdio.h>
#include<string.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    return;
}

int a[15], b[15];

int main(){
    memset(a, 0, 15);
    memset(b, 0, 15);
    int n, start = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
        swap(&a[i], &a[b[i]]);
    }
    for(int i = 0; i < n; i++){
        if(start){
            printf("%d", a[i]);
            start = 0;
        } 
        else printf(" %d", a[i]);
    }
    return 0;
}