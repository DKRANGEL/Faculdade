#include <stdio.h>

int g(int x);

int g(int x) {
    if (x == 0) return -1;
    else if (x > 0) return (4 * g(x - 1) + 6);
}

int main() {

    system("cls");
    int N = g(4);
    printf("Resposta: %d\n", N);

    return 0;
}
