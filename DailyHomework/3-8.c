#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int a[1000], n = 0;
    for(int i = 0; num; i++){
        a[i] = num % 10;
        num /= 10;
        n++;
     }
    if(!a[0]){
        printf("The number cannot be changed.");
        return 0;
    }
    
    for(int i = 0; i < n; i++) printf("%d", a[i]);
    return 0;
}