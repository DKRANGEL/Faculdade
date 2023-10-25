#include <stdio.h>

int main()
{
    float saldo, reajuste;

    printf("Digite o saldo da sua poupança: ");
    scanf("%f", &saldo);

    reajuste = (saldo * (1.5 / 100)) + saldo;

    printf("O seu saldo com reajuste é: %.2f", reajuste);

    return 0;
}
