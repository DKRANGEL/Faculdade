#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Digite 3 números: ");
    scanf("%d%d%d", &num1, &num2, &num3)

    if (num1 > num2 && num2 > num3){
        printf("1º Numero: %d\n2º Numero: %d\n3º Numero: %d", num1, num2, num3)
    }
    else if (num2 > num1 && num1 > num3)
    {
        printf("1º Numero: %d\n2º Numero: %d\n3º Numero: %d", num2, num1, num3)
    }
    
    

    return 0;
}
