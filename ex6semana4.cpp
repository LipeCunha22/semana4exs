#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para o somatório
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

    //função
    float resultado = Somatorio(n);

    printf("O valor da série para n = %d é: %f\n", n, resultado);

    return 0;
}

