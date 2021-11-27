#include<stdio.h>
#include<string.h>
int num[205];
int main(){
    memset(num, 0, 205);
    int n;
    scanf("%d", &n);

    int start = 1;


    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        if(!(num[i] % 2)){
            if(start == 1){
                printf("%d", num[i]);
                start = 0;
            }
            else{
                printf(" %d", num[i]);
            } 
        } 
        
    }
    for(int i = 0; i < n; i++){
        if(num[i] % 2){
            if(start == 1){
                printf("%d", num[i]);
                start = 0;
            }
            else{
                printf(" %d", num[i]);
            }
            
        }
    }
    printf("\n");
    return 0;
}