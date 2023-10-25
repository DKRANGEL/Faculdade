#include <stdio.h>

int main()
{
    float base, altura, perimetro, area;

    printf("Digite a altura do retângulo em CM: ");
    scanf("%f", &altura);

    printf("Digite a base do retângulo em CM:  ");
    scanf("%f", &base);

    perimetro = base + altura;
    area = base * altura;

    printf("O perimetro do retângulo é: %.2f CM\nA area do retângulo é: %.2f CM²", perimetro, area);

    return 0;
}
