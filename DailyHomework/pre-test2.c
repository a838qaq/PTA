#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int num[100000];

int main(){
    memset(num, 0, sizeof(num));
    for(int i = 0;;i++){
        scanf("%d", &num[i]);
        if(num[i] == -1) break;
    }
    
    int sum = 0, sub = 0, count_1 = 0, count_2 = 0, cont_0 = 0;
    for(int i = 0;;i++){
        if(num[i] == -1) break;
        if(num[i] > 0) {
            sum += num[i];
            count_1++;
        }
        if(num[i] < 0){
            sub += num[i];
            count_2++;
        }
        if(num[i] == 0){
            cont_0++;
        }
    }
    printf("%d %d %d\n", count_1, cont_0, count_2);
    printf("%d %d", sum, sub);
    return 0;
}