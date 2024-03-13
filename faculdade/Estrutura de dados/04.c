#include <stdio.h>

int N;

int fatorial(int);

int main() {
    system("cls");
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("Fatorial de %d = %d\n", N, fatorial(N));

    return 0;
}

int fatorial(int N)
{
    if (N == 0) return 1;
    else if (N == 1) return 1;
    else if (N >= 2) return (N * fatorial(N - 1));
    else return printf("Valor invalido");

        
}