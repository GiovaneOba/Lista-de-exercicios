#include <stdio.h>
#include <time.h>

int somaAteN(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    clock_t inicio = clock();

    long int resultado = somaAteN(100000000);

    clock_t fim = clock();

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Resultado da soma: %ld\n", resultado);
    printf("Tempo para executar o código: %.2f segundos\n", tempo);

    return 0;
}