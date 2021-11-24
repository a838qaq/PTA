#include<stdio.h>

void printFactor( int, int ); 

int main()
{
    int a,b,i ;

    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;    

    return 0;
}

/* 请在这里填写答案 */
int isPrime(int n){
    if(n == 2) return 1;
    if(n == 1) return 0;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}



void printFactor( int num, int is){
    if(is == 1){
        printf("%d=", num);
    }
    
    if(isPrime(num)){
        printf("%d\n", num);
        return;
    }
    
    if(num == 1){
        printf("1\n");
        return;
    }

    for(int i = 2; i <= num; i++){
        if(isPrime(i)){
            if(num % i == 0){
               
                printf("%d", i);
                if(num / i != 1){
                    printf("*");
                }
                else printf("\n");
                printFactor(num / i, 0);
                break;
            }
            
        }
    }
}