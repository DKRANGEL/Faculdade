#include <stdio.h>

int main() 
{

    int n1, n2, result;

    printf("digite um numero: ");
    scanf("%d", &n1);

    printf("digite outro numero: ");
    scanf("%d", &n2);

    result = n1 + n2;

    printf("A soma dos números digitados é: %d", result);

    return 0;

}
