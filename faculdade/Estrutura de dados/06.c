#include <stdio.h>

float harmonic(int N);

int main(int N) {

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("Série harmônica é %.2f\n", harmonic(N));

    return 0;
}

float harmonic(int N) {
    float soma = 0;
    for (int i = 1; i <= N; i++) {
        soma = soma + 1 / i;
    }
    return soma;
}