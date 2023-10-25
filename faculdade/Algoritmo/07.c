#include <stdio.h>
#include <string.h>

int main() 
{

    char nome[50];
    char end [50];
    char tel [15];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu endereço: ");
    fgets(end, sizeof(end), stdin);

    printf("Digite seu telefone: ");
    fgets(tel, sizeof(tel), stdin);

    printf("\nNome: %s\nEndereço: %s\nTelefone: %s", nome, end, tel);
    
    return 0;

}