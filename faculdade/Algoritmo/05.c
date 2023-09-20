#include <stdio.h>

int main() 
{

    float num1, num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("O numeros digitados foram: %.0f e %.0f", num1, num2);

    return 0;

}