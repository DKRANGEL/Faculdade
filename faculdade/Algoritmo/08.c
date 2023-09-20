#include <stdio.h>

int main() 
{

    int num1, num2, sub;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite um numero: ");
    scanf("%d", &num2);

    sub = num1 - num2;

    printf("A subtração dos numeros digiteados é: %d", sub);

    return 0;

}