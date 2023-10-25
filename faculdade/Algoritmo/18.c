#include <stdio.h>

int main()
{
    float dolar, real;

    printf("Digite quantos dolares você tem: ");
    scanf("%f", &dolar);

    real = dolar * 4.94;

    printf("\nCom %.2f Dólares você consegue comprar %.2f Reais.", dolar, real);

    return 0;
}
