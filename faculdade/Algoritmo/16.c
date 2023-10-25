#include <stdio.h>

int main()
{
    float farenheit, celcius;

    printf("Digite a temperatura em celcius: ");
    scanf("%f", &celcius);

    farenheit = (9 * celcius + 160) / 5;

    printf("A temperatura informada na conversao de celcius para fahrenheit é: %.2f°F", farenheit);

    return 0;
}
