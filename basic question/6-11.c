#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */

//冒泡排序
ElementType Median( ElementType A[], int N ){
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - i - 1; j++){
            if(A[j] >= A[j + 1]){
            ElementType temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
            }
        }
    }

    
    if(N % 2 == 1) return A[(N - 1) / 2];
    else return A[(N + 1) / 2];
}