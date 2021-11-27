#include<stdio.h>
int search(int n, int money){
    printf("%d:%d\n", money, n / money);
    return n % money;
}
int main(){
    int n, salary[7] = {100,50,20,10,5,2,1};
    scanf("%d", &n);
    for(int i = 0; i < 7; i++){
        if(n >= salary[i]){
            n = search(n, salary[i]);
        }
    }
    return 0;
}