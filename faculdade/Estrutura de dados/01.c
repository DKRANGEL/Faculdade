#include <stdio.h>

float notas[2];

float media() {
    return (notas[0] + notas[1] + notas[2]) / 3;
}

int main() {
    float mdia;

    printf("Digite as notas: ");
    scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);

    mdia = media(notas[0], notas[1], notas[2]);
    
    printf("A media e: %.2f", mdia);

    return 0;
}
