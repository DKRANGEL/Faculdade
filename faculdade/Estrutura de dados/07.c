#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR -1

int tamanhoString(char *string);

int main() {
    char string[100];
    printf("Digite uma string: ");
    gets(string);
    printf("Tamanho da string: %d\n", tamanhoString(string));
    return 0;
}

int tamanhoString(char *string) {
    int tamanho = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        tamanho++;
    }
    return tamanho;
}
