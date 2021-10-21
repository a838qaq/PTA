#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num;
        int count = 0;
        while(scanf("%d", &num) == 1 && num != -1){
            int a = 1;
            if(num == 2) count++;
            else if(num == 3) count++;
            else{
                for(int j = 2; j < num && num != 3; j++){
                    if(num % j == 0){
                        a = 0;
                        break;
                    }
                }
                if(a == 1){
                    count++;
                }
                a = 1;
            }
            
        }
        printf("%d\n", count);
    }
    return 0;
}