#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o para o somat�rio
float Somatorio(int n) {
    float soma = 0.0f;
    int i;
    for (i = 1; i <= n; i++) {
        soma += (float)i / (i * i) * ((i % 2 == 0) ? -1 : 1);
    }
    return soma;
}

int main() {
    int n;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    //fun��o
    float resultado = Somatorio(n);

    printf("O valor da s�rie para n = %d �: %f\n", n, resultado);

    return 0;
}

