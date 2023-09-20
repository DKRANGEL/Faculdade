#include <stdio.h>

int main() 
{

    int num1, num2, num3;
    float media;

    printf("Digite 3 numeros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média dos numeros digitados é: %f", media);

    return 0;

}