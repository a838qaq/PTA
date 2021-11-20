#include<stdio.h>
int main(){
    int num;
    float c3 = 0.0, c5 = 0.0, c7 = 0.0;
    float count = 0.0;
    while(scanf("%d", &num) == 1){
        if(num == 0){
            printf("%.2f%%\n%.2f%%\n%.2f%%", c3/count * 100, c5/count * 100, c7/count * 100);
            break;
        }
        
        if(num % 3 == 0 && num % 5 != 0 && num % 7 != 0) c3++;
        if(num % 5 == 0 && num % 3 != 0 && num % 7 != 0) c5++;
        if(num % 7 == 0 && num % 5 != 0 && num % 3 != 0) c7++;
        count++;
        
        
        
    }
    return 0;
}