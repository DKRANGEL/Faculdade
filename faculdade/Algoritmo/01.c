#include <stdio.h>

int main()
{

    float n1, n2, n3, media;

    printf("Digite o 1° Numero: ");
    scanf("%f", &n1);

    printf("Digite o 2° Numero: ");
    scanf("%f", &n2);

    printf("Digite o 3° Numero: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("A média é %.2f", media);

    return 0;
   
} 