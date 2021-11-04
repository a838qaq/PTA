#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = n;;i++){
        if(((i - 1) % 5 == 0) && ((i + 1) % 6 == 0) && ((i + 1) % 7 == 0) && ((i + 1) % 11 == 0)){
            printf("%d", i);
            break;
        }
    }
    return 0;
}