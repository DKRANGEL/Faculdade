#include <stdio.h>

int main() {
    char vetor[10];

    // Preencha o vetor com 10 letras
    printf("Digite 10 letras:\n");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &vetor[i]); // Usamos um espaço antes de %c para consumir possíveis espaços em branco ou quebras de linha.
    }

    // Imprima a listagem numerada
    printf("Listagem numerada:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %c\n", i + 1, vetor[i]);
    }

    return 0;
}
