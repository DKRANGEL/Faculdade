#include <stdio.h>

#define ERROR -1

int fibonacci(int N);

int fibonacci(int N) {
    if (N == 0 || N == 1 || N == 2) return 1;
    else if (N > 2) return fibonacci(N - 1) + fibonacci(N - 2);
    else return ERROR;
}

int main(int N) {
    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("Fibonacci de %d = %d\n", N, fibonacci(N));

    return 0;
}