#include <stdio.h>

int main() 
{

    char [100] nome, end, tel;

    printf("Digite seu nome: \n");
    scanf("[%c]", &nome);

    printf("Digite seu endereço: \n");
    scanf("[%c]", &end);

    printf("Digite seu telfone: \n");
    scanf("[%c]", &tel);

    printf("O seu nome é: %c seu endereço é: %c e o seu telefone è: %c", nome, end, tel);
    
    return 0;

}