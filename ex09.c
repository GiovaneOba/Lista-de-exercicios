#include <stdio.h>

float calcularMedia(const int *array, int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    return soma / tamanho;
}

float calcularMediana(int *array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    if (tamanho % 2 != 0) {
        return array[tamanho / 2];
    }
    else {
        return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
    }
}

int calcularModa(int *array, int tamanho) {
    int frequenciaAtual = 1;
    int frequenciaMaxima = 1;
    int moda = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] == array[i - 1]) {
            frequenciaAtual++;
        }
        else {
            if (frequenciaAtual > frequenciaMaxima) {
                frequenciaMaxima = frequenciaAtual;
                moda = array[i - 1];
            }
            frequenciaAtual = 1;
        }
    }

    if (frequenciaAtual > frequenciaMaxima) {
        frequenciaMaxima = frequenciaAtual;
        moda = array[tamanho - 1];
    }

    return moda;
}

int main() {
    int tamanho;

    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os elementos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    float media = calcularMedia(array, tamanho);

    float mediana = calcularMediana(array, tamanho);

    int moda = calcularModa(array, tamanho);

    printf("Media: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    return 0;
}
