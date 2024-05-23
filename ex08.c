#include <stdio.h>

void inverterArray(const int *array, int tamanho, int *arrayInvertido) {
    int *ptr = arrayInvertido + tamanho - 1;

    for (int i = 0; i < tamanho; i++) {
        *(arrayInvertido + i) = *(array + (tamanho - 1 - i));
    }
}

int main() {
    int tamanho;

    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    int arrayOriginal[tamanho];

    printf("Digite os elementos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &arrayOriginal[i]);
    }

    int arrayInvertido[tamanho];

    inverterArray(arrayOriginal, tamanho, arrayInvertido);

    printf("Array invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arrayInvertido[i]);
    }
    printf("\n");

    return 0;
}
