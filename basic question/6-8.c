#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;

    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int Factorial( const int N ){
    if (N < 0) return 0;
    else return N == 0 ? 1 : N * Factorial( N - 1);
}