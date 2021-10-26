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

//快速排序
void swap(ElementType *a, ElementType *b){
    ElementType c = *a;
    *a = *b;
    *b = c;
}

int partition(ElementType *arr, int low, int high){
    int i = low - 1;
    int j = high;
    int temp = arr[high];
    while(1){
        while(arr[++i] < temp);
        while(arr[--j] > temp);
        if(i < j) swap(&arr[i], &arr[j]);
        else
            break;
    } 
    swap(&arr[i], &arr[high]);
    return i;
}

void qsort(ElementType *arr, int low, int high){
    int mid = partition(arr ,low, high);
    qsort(arr, low, mid - 1);
    qsort(arr, mid + 1, high);
}

void quik_sort(ElementType *arr, int n){
     qsort(arr, 0, n - 1);
}



ElementType Median( ElementType arr[], int n ){
    quik_sort(arr, n);
    if(n % 2 == 1) return arr[(n - 1) / 2];
    else return arr[(n + 1) / 2];
}