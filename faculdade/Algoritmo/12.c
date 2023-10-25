#include <stdio.h>

int main()
{
    float num, quad;

    printf("Digite um número: ");
    scanf("%f", &num);

    quad = num * num;

    printf("O quadrado do numero digitado é: %.2f", quad);

    return 0;
}
