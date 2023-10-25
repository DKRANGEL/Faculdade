#include <stdio.h>

int main()
{
    float valor, percent, desc, total;

    printf("Digite o valor do prod ");
    scanf("%f", &valor);

    printf("Digite o desconto em porcentagem: ");
    scanf("%f", &percent);

    desc = valor * (percent / 100);

    total = valor - desc;

    printf("Valor S/ desconto: %.2f\nDesconto: %.2f\nValor C/ desconto: %.2f", valor, desc, total);

    return 0;
}
