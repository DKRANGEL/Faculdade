#include <stdio.h>

int main() 
{

    int num1, num2;
    float div, multi, soma, sub;

    printf("Digite 2 numeros: ");
    sacnf("%d%d", num1, num2);

    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;

    printf("A soma é: %f", soma);
    printf("A subtração é: %f", soma);
    printf("A soma é: %f", soma);
    printf("A soma é: %f", soma);

}