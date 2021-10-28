#include<stdio.h>
int main(){
    int head, leg;
    scanf("%d %d", &head, &leg);
    for(int i = 0; i <= head || i * 2 <= leg; i++){
        for(int j = 0; j <= head || j * 4 <= leg; j++){
            for(int k = 0; k <= head || k * 6 <= leg; k++){
                if((i + j +k == head) && (2 * i + 4 * j + 6 * k == leg)){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}