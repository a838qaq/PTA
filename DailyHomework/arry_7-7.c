#include<stdio.h>
#include<string.h>

int a[1005], b[1005];

int main(){
    memset(a, 0, 1005);
    memset(b, 0, 1005);
    
    int lengthA = 0, lengthB = 0;
    
    for(int i = 0;; i++){
        scanf("%d", &a[i]);
        if(a[i] == -1) break;
        lengthA++;
    }
    
    for(int i = 0;; i++){
        scanf("%d", &b[i]);
        if(b[i] == -1) break;
        lengthB++;
    }
    int i = 0;
    int isRight = 0;
    for(int q = 0; q < lengthA; q++){
        i = q;
        if(a[i] == b[0]){
            int isRight = 1;
            for(int j = 0; j < lengthB; j++){
                if(a[i + j] != b[j]){
                    isRight = 0;
                    break;
                }
            }
            if(isRight){
                printf("ListB is the sub sequence of ListA.");
                return 0;
            }
        }
    }
    printf("ListB is not the sub sequence of ListA.");
//    printf("%d %d", lengthA, lengthB);
    return 0;
}