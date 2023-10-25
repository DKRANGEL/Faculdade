#include <stdio.h>

int main() 
{

    int num1, num2;
    float div, multi, soma, sub;

    printf("Digite 2 numeros: ");
    scanf("%d%d", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;

    printf("A soma entre %d e %d é: %.2f\n", num1, num2, soma);
    printf("A subtração entre %d e %d é: %.2f\n", num1, num2, sub);
    printf("A multiplicação entre %d e %d é: %.2f\n", num1, num2, multi);
    printf("A divisão entre %d e %d é: %.2f\n", num1, num2, div);

    return 0;

}